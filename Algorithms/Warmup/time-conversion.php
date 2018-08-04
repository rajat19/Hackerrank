<?php
echo (new DateTime(fgets(fopen("php://stdin", "r"))))->format("H:i:s");
?>

