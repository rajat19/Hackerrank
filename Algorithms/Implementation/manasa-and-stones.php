<?php
$fp = fopen("php://stdin", "r");
fscanf($fp, "%d", $t);
while($t!=0) {
    $n = explode(' ', trim(fgets($fp)))[0];
    $a = explode(' ', trim(fgets($fp)))[0];
    $b = explode(' ', trim(fgets($fp)))[0];
    $ar = array();
    for($i=0; $i<$n; $i++) {
        $x = ($a*($n-1-$i)) + ($b*$i);
        $ar[] = $x;
    }
    sort($ar);
    $ar = array_unique($ar);
    foreach($ar as $v) echo $v." ";
    echo "\n";
    unset($ar);
    $t--;
}
?>