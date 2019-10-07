<?php
$fp = fopen("php://stdin", "r");
$n = explode(' ', trim(fgets($fp)))[0];
$car = array();
for($i=0; $i<$n; $i++) {
    $s = trim(fgets($fp));
    $s = implode('', array_unique(str_split($s)));
    for($j=0; $j<strlen($s); $j++) {
        $car[$s[$j]]++;
    }
}
$count = 0;
foreach($car as $v) {
    if($v==$n) $count++;
}
echo $count;
?>