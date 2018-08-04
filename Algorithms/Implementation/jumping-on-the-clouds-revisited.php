<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d %d",$n,$k);
$c_temp = fgets($handle);
$c = explode(" ",$c_temp);
array_walk($c,'intval');
$i=0;$e=100;
while($i<$n) {
    $e--;
    if($c[$i] == 1)
        $e -= 2;
    $i+=$k;
}
echo $e;
?>

