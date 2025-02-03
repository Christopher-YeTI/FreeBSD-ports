--TEST--
test1() Basic test
--EXTENSIONS--
libresense
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension libresense is loaded and working!
NULL
