<?php
$fp = fopen("php://stdin", "r");
$ar = explode(' ', trim(fgets($fp)));
$er = explode(' ', trim(fgets($fp)));
$tot = 0;
if($er[2] < $ar[2]) {
    $tot = 10000;
}
else if($er[2] == $ar[2]){
    if($er[1] < $ar[1]) {
        $tot = 500*($ar[1] - $er[1]);
    }
    else if($er[0] < $ar[0])
        $tot = 15*($ar[0] - $er[0]);
}
echo $tot;
?>