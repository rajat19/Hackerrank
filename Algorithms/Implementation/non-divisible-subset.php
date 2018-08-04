<?php
$_fp = fopen("php://stdin", "r");
/*fscanf($_fp, "%d", $n);
fscanf($_fp, "%d", $k);
fscanf($_fp, "%s", $str);*/
$ix = fgets($_fp);
$in = explode(" ", $ix);
$n = $in[0]; $k = $in[1];
$str = fgets($_fp);
$new = array();
$arr = explode(" ", $str);
for($i=0; $i <$n; $i++) {
    $new[$i] = 0;
    for($j=0; $j < $n; $j++) {
        if($i != $j) {
            $sum = $arr[$i] + $arr[$j];
            if($sum % $k == 0) {
                $new[$i]++;
            }
        }
    }
    if($new[$i] == $n-1) {
        unset($arr[$i]);
    }
}
$i = 0;
foreach($arr as $w) {
    if($w % $k == 0) {
        $i++;
    }
}$h = 1;
foreach($arr as $l=>$w) {
    if($w % $k == 0) {
        if($h<$i) {
            unset($arr[$l]);
        }
        $h++;
    }
}
$fin = count($arr);
echo $fin;
?>
