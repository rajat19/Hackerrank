<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
$c_temp = fgets($handle);
$c = explode(" ",$c_temp);
array_walk($c,'intval');
$total = 0;
$step = 0;
while($step < count($c)) {
    $dis = count($c) - $step - 1;
    if($dis == 2)
        $step +=2;
    else if($dis == 1)
        $step++;
    else if($c[$step+2] == 0)
        $step+=2;
    else $step++;
    $total++;
}
echo $total-1;
?>
