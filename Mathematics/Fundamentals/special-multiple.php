<?php
function genbin() {
    $arr = array();
    for($i=1; $i<=10000; $i++) {
        $a = (int) decbin($i);
        array_push($arr, (9 * $a));
    }
    return $arr;
}
    
$fp = fopen("php://stdin", "r");
$t = explode(' ', fgets($fp))[0];
$arr = genbin();
while($t > 0) {
    $n = explode(' ', fgets($fp))[0];
    foreach($arr as $x=>$v) {
        if($v % $n == 0) {
            echo $v."\n"; break;
        }
    }
    $t--;
}
?>