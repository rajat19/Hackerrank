<?php
$fp = fopen("php://stdin", "r");
$n = explode(' ', trim(fgets($fp)))[0];
$ar = array(array());
for($i=0; $i<$n; $i++) {
    $x = explode(' ', trim(fgets($fp)));
    $ar[$x[0]][$i] = $x[1];
}
ksort($ar);
foreach($ar as $x=>$v) {
    foreach($v as $a=>$b) {
        if($a < ($n/2)) echo "- ";
        else echo "$b ";
    }
}
?>