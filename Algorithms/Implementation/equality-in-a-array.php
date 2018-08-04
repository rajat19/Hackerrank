<?php
$fp = fopen("php://stdin", "r");
$n = explode(' ', trim(fgets($fp)))[0];
$a = explode(' ', trim(fgets($fp)));
$acv = array_count_values($a);
$m = max($acv);
$ans = $n - $m;
echo $ans;
?>
