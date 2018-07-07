<?php
$fp = fopen("php://stdin", "r");
$a = explode(' ', trim(fgets($fp)));
$n = $a[0]; $k = $a[1];
$a = explode(' ', trim(fgets($fp)));
$ch = explode(' ', trim(fgets($fp)));
$tot = 0;
foreach($a as $key=>$val) {
    if($key!=$k)
        $tot += (int)$val;
}
$rem = (int)$ch[0] - $tot/2;
if($rem == 0) 
    echo "Bon Appetit";
else echo $rem;
?>