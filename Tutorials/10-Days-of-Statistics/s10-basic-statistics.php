<?php
$fp = fopen("php://stdin", "r");
$n = explode(' ', trim(fgets($fp)))[0];
$a = explode(' ', trim(fgets($fp)));
$s = 0;
foreach($a as $x) {
    $s+=$x;
}
$mean = $s/$n;
sort($a);
if($n%2==0) {
    $median = ($a[$n/2 - 1] + $a[$n/2])/2;
}
else $median = $a[($n-1)/2];
$acv = array_count_values($a);
$max = 0; $mode = 0;
foreach($acv as $x=>$v) {
    if($v>$max) {
        $max = $v;
        $mode = $x;
    }
}
echo "$mean
$median
$mode";
?>
