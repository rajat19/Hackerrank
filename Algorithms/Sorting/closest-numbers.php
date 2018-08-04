<?php
$fp = fopen("php://stdin", "r");
$n = explode(' ', trim(fgets($fp)))[0];
$arr = explode(' ', trim(fgets($fp)));
sort($arr);
$pair = array();
$min = 0;
for($i=0; $i<count($arr)-1; $i++) {
    $dif = abs($arr[$i+1] - $arr[$i]);
    if($i==0) $min = $dif;
    else {
        if($dif < $min) {
            $min = $dif;
            unset($pair);
            $pair[] = array($arr[$i], $arr[$i+1]);
        }
        else if($dif == $min) {
            $pair[] = array($arr[$i], $arr[$i+1]);
        }
    }
}
foreach($pair as $v) {
    echo $v[0]." ".$v[1]." ";
}
?>
