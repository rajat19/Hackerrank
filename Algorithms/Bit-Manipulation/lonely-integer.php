<?php
function lonelyinteger( $a) {
    $val = array_count_values($a);
    foreach($val as $k=>$v) {
        if($v == 1)
            return $k;
    }
    return 0;
}
$__fp = fopen("php://stdin", "r");

fscanf($__fp, "%d", $_a_cnt);
$_a = fgets($__fp);
//$_a = split(' ',$_a);
$_a = explode(' ', $_a);
$res = lonelyinteger($_a);
echo $res;

?>

