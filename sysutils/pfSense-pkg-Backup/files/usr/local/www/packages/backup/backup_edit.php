<?php
/*
 * backup_edit.php
 *
 * part of pfSense (https://www.pfsense.org)
 * Copyright (c) 2015-2025 Rubicon Communications, LLC (Netgate)
 * Copyright (c) 2008 Mark J Crane
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
require_once("guiconfig.inc");
require_once("/usr/local/pkg/backup.inc");

$id = $_GET['id'];
if (isset($_POST['id'])) {
	$id = $_POST['id'];
}

if ($_GET['act'] == "del") {
	if ($_GET['type'] == 'backup') {
		if (config_get_path("installedpackages/backup/config/{$_GET['id']}")) {
			config_del_path("installedpackages/backup/config/{$_GET['id']}");
			write_config("Backup: Item deleted");
			backup_sync_package();
			header("Location: backup.php");
			exit;
		}
	}
}

$this_backup_config = config_get_path("installedpackages/backup/config/{$id}");
if (isset($id) && $this_backup_config) {

	$pconfig['name'] = $this_backup_config['name'];
	$pconfig['path'] = $this_backup_config['path'];
	$pconfig['enabled'] = $this_backup_config['enabled'];
	$pconfig['description'] = $this_backup_config['description'];

}

if ($_POST) {
	/* TODO - This needs some basic input validation for the path at least */
	unset($input_errors);
	$pconfig = $_POST;

	if (!$input_errors) {

		$ent = array();
		$ent['name'] = $_POST['name'];
		$ent['path'] = $_POST['path'];
		$ent['enabled'] = $_POST['enabled'];
		$ent['description'] = $_POST['description'];

		if (isset($id) && $this_backup_config) {
			// update
			config_set_path("installedpackages/backup/config/{$id}", $ent);
		} else {
			// add
			config_set_path('installedpackages/backup/config/', $ent);
		}

		write_config("Backup: Settings saved");
		backup_sync_package();

		header("Location: backup.php");
		exit;
	}
}

$thispage = gettext("Add");
if (!empty($id)) {
	$thispage = gettext("Edit");
}

$pgtitle = array(gettext("Diagnostics"), gettext("Backup Files and Directories"), $thispage);
include("head.inc");

$tab_array = array();
$tab_array[] = array(gettext("Settings"), false, "/packages/backup/backup.php");
$tab_array[] = array($thispage, true, "/packages/backup/backup_edit.php");

display_top_tabs($tab_array);

$form = new Form();
$section = new Form_Section('Backup Settings');

$section->addInput(new Form_Input(
	'name',
	'Backup Name',
	'text',
	$pconfig['name']
))->setHelp('Enter a name for the backup.');

$section->addInput(new Form_Input(
	'path',
	'Path',
	'text',
	$pconfig['path']
))->setHelp('Enter the full path to the file or directory to backup.');

$section->addInput(new Form_Select(
	'enabled',
	'Enabled',
	$pconfig['enabled'],
	array( "true" => "Enabled", "false" => "Disabled" )
))->setHelp('Choose whether this backup location is enabled or disabled.');

$section->addInput(new Form_Input(
	'description',
	'Description',
	'text',
	$pconfig['description']
))->setHelp('Enter a description here for reference.');

$form->add($section);

print $form;
?>
<?php include("foot.inc"); ?>
