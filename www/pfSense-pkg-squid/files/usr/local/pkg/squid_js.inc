<?php
/*
 * squid_js.inc
 *
 * part of pfSense (https://www.pfsense.org)
 * Copyright (c) 2015-2025 Rubicon Communications, LLC (Netgate)
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

/*
 * Squid javascript helpers for GUI fields status manipulation
 */
require_once('config.inc');

/*
 * Enable/disable and blank out various parts of the Authentication tab
 * depending on selected 'Authentication Method' value
 */
function squid_print_javascript_auth() {
	$squidsettings = config_get_path('installedpackages/squid/config/0', []);
	$settingsauth = config_get_path('installedpackages/squidauth/config/0', []);
	$transparent_proxy = ($squidsettings['transparent_proxy'] == 'on');
	$auth_method = $settingsauth['auth_method'];

	// No authentication for transparent proxy
	if ($transparent_proxy and preg_match("/(local|ldap|radius|ntlm)/", $auth_method)) {
		$javascript = <<< EOD
<script type="text/javascript">
//<![CDATA[
function on_auth_method_changed() {
	$('#auth_method').prop("disabled", true);
	$('#auth_server').prop("disabled", true);
	$('#auth_server_port').prop("disabled", true);
	$('#ldap_user').prop("disabled", true);
	$('#ldap_version').prop("disabled", true);
	$('#ldap_urltype').prop("disabled", true);
	$('#ldap_userattribute').prop("disabled", true);
	$('#ldap_filter').prop("disabled", true);
	$('#ldap_pass').prop("disabled", true);
	$('#ldap_basedomain').prop("disabled", true);
	$('#ldap_noreferrals').prop("disabled", true);
	$('#radius_secret').prop("disabled", true);
	$('#auth_prompt').prop("disabled", true);
	$('#auth_processes').prop("disabled", true);
	$('#auth_ttl').prop("disabled", true);
	$('#unrestricted_auth').prop("disabled", true);
	$('#no_auth_hosts').prop("disabled", true);
}
//]]>
</script>

EOD;

	} else {

		$javascript = <<< EOD
<script type="text/javascript">
//<![CDATA[
function on_auth_method_changed() {
	auth_method = $('#auth_method').val();

	if (auth_method == 'none') {
		$('#auth_server').prop("disabled", true);
		$('#auth_server_port').prop("disabled", true);
		$('#ldap_user').prop("disabled", true);
		$('#ldap_version').prop("disabled", true);
		$('#ldap_urltype').prop("disabled", true);
		$('#ldap_userattribute').prop("disabled", true);
		$('#ldap_filter').prop("disabled", true);
		$('#ldap_pass').prop("disabled", true);
		$('#ldap_basedomain').prop("disabled", true);
		$('#ldap_noreferrals').prop("disabled", true);
		$('#radius_secret').prop("disabled", true);
		$('#auth_prompt').prop("disabled", true);
		$('#auth_processes').prop("disabled", true);
		$('#auth_ttl').prop("disabled", true);
		$('#unrestricted_auth').prop("disabled", true);
		$('#no_auth_hosts').prop("disabled", true);
	} else {
		$('#auth_prompt').prop("disabled", false);
		$('#auth_processes').prop("disabled", false);
		$('#auth_ttl').prop("disabled", false);
		$('#unrestricted_auth').prop("disabled", false);
		$('#no_auth_hosts').prop("disabled", false);
	}

	switch (auth_method) {
	case 'local':
		$('#auth_server').prop("disabled", true);
		$('#auth_server_port').prop("disabled", true);
		$('#ldap_user').prop("disabled", true);
		$('#ldap_pass').prop("disabled", true);
		$('#ldap_version').prop("disabled", true);
		$('#ldap_urltype').prop("disabled", true);
		$('#ldap_userattribute').prop("disabled", true);
		$('#ldap_filter').prop("disabled", true);
		$('#ldap_basedomain').prop("disabled", true);
		$('#ldap_noreferrals').prop("disabled", true);
		$('#radius_secret').prop("disabled", true);
		break;
	case 'ldap':
		$('#auth_server').prop("disabled", false);
		$('#auth_server_port').prop("disabled", false);
		$('#ldap_user').prop("disabled", false);
		$('#ldap_pass').prop("disabled", false);
		$('#ldap_version').prop("disabled", false);
		$('#ldap_urltype').prop("disabled", false);
		$('#ldap_userattribute').prop("disabled", false);
		$('#ldap_filter').prop("disabled", false);
		$('#ldap_basedomain').prop("disabled", false);
		$('#ldap_noreferrals').prop("disabled", false);
		$('#radius_secret').prop("disabled", true);
		break;
	case 'radius':
		$('#auth_server').prop("disabled", false);
		$('#auth_server_port').prop("disabled", false);
		$('#ldap_user').prop("disabled", true);
		$('#ldap_pass').prop("disabled", true);
		$('#ldap_version').prop("disabled", true);
		$('#ldap_urltype').prop("disabled", true);
		$('#ldap_userattribute').prop("disabled", true);
		$('#ldap_filter').prop("disabled", true);
		$('#ldap_basedomain').prop("disabled", true);
		$('#ldap_noreferrals').prop("disabled", true);
		$('#radius_secret').prop("disabled", false);
		break;
	case 'cp':
		$('#auth_server').prop("disabled", true);
		$('#auth_server_port').prop("disabled", true);
		$('#ldap_user').prop("disabled", true);
		$('#ldap_version').prop("disabled", true);
		$('#ldap_urltype').prop("disabled", true);
		$('#ldap_userattribute').prop("disabled", true);
		$('#ldap_filter').prop("disabled", true);
		$('#ldap_pass').prop("disabled", true);
		$('#ldap_basedomain').prop("disabled", true);
		$('#ldap_noreferrals').prop("disabled", true);
		$('#radius_secret').prop("disabled", true);
		$('#auth_prompt').prop("disabled", true);
		$('#auth_processes').prop("disabled", false);
		$('#auth_ttl').prop("disabled", false);
		$('#unrestricted_auth').prop("disabled", true);
		$('#no_auth_hosts').prop("disabled", true);
		break;
	}
}
//]]>
</script>

EOD;

	}
	print($javascript);
}

/* onchange toggle helper for squid_print_javascript_auth() function */
function squid_print_javascript_auth2() {
	print("<script type=\"text/javascript\">events.push(function () {on_auth_method_changed();});</script>\n");
}

/*
 * Enable/disable and blank out various parts of the Antivirus tab
 * depending on selected 'Enable Manual Configuration' value
 */
function squid_print_antivirus_advanced_config() {
	$javascript = <<< EOD
<script type="text/javascript">
//<![CDATA[

function on_antivirus_advanced_config_changed() {
	var enable_advanced = $('#enable_advanced').val();

	if (enable_advanced === 'disabled') {
		$('#clamav_url').prop("disabled", false);
		$('#clamav_safebrowsing').prop("disabled", false);
		$('#clamav_disable_stream_scanning').prop("disabled", false);
		$('#clamav_update').prop("disabled", false);
		$('#clamav_dbregion').prop("disabled", false);
		$('#clamav_dbservers').prop("disabled", false);
		$('#load_advanced').prop("disabled", true);
		$('#raw_squidclamav_conf').prop("disabled", true);
		$('#raw_squidclamav_conf').val("");
		$('#raw_cicap_conf').prop("disabled", true);
		$('#raw_cicap_conf').val("");
		$('#raw_cicap_magic').prop("disabled", true);
		$('#raw_cicap_magic').val("");
		$('#raw_freshclam_conf').prop("disabled", true);
		$('#raw_freshclam_conf').val("");
		$('#raw_clamd_conf').prop("disabled", true);
		$('#raw_clamd_conf').val("");
	} else {
		$('#clamav_url').prop("disabled", true);
		$('#clamav_safebrowsing').prop("disabled", true);
		$('#clamav_safebrowsing').prop('checked', false);
		$('#clamav_disable_stream_scanning').prop("disabled", true);
		$('#clamav_disable_stream_scanning').prop('checked', false);
		$('#clamav_update').prop("disabled", false);
		$('#clamav_dbregion').prop("disabled", true);
		$('#clamav_dbregion').val("");
		$('#clamav_dbservers').prop("disabled", true);
		$('#clamav_dbservers').val("");
		$('#load_advanced').prop("disabled", false);
		$('#raw_squidclamav_conf').prop("disabled", false);
		$('#raw_cicap_conf').prop("disabled", false);
		$('#raw_cicap_magic').prop("disabled", false);
		$('#raw_freshclam_conf').prop("disabled", false);
		$('#raw_clamd_conf').prop("disabled", false);

	}

	if ($('#enable').prop('checked') == false) {
		$('#update_av').prop("disabled", true);
	} else {
		$('#update_av').prop("disabled", false);
	}
}
//]]>
</script>

EOD;
	print($javascript);

}

/* onchange toggle helper for squid_print_antivirus_advanced_config() function */
function squid_print_antivirus_advanced_config2() {
	print("<script type=\"text/javascript\">events.push(function () {on_antivirus_advanced_config_changed();});</script>\n");
}

?>
