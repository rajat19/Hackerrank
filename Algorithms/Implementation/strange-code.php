<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
$x = 3;
$y = 1;
$count = 1;
$k = $x * $count;
while($y < $t) {
    if($k==1) {
        $count*=2;
        $k = $x * $count;
    }
    else $k--;
    $y++;
}
echo $k;
?>

