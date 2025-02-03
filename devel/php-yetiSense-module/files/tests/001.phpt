--TEST--
Check if libresense is loaded
--EXTENSIONS--
libresense
--FILE--
<?php
echo 'The extension "libresense" is available';
?>
--EXPECT--
The extension "libresense" is available
