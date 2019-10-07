<?php
$_fp = fopen("php://stdin", "r");
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
fscanf($_fp, "%d", $n);
while($n > 0) {
    fscanf($_fp, "%s", $str);
    $arr = str_split($str);
    $res = nextpermutation($arr);
    if(!$res) {
        echo "no answer";
    }
    else echo implode($res, '');
    echo "\n";
    $n--;
}

function nextpermutation($arr) {
    $i = count($arr) - 1;
    while ($i > 0 && $arr[$i - 1] >= $arr[$i]) {
        $i--;
    }

    if ($i <= 0) {
        return false;
    }

    $j = count($arr) - 1;

    while ($arr[$j] <= $arr[$i - 1]) {
        $j--;
    }

    $temp = $arr[$i - 1];
    $arr[$i - 1] = $arr[$j];
    $arr[$j] = $temp;

    $j = count($arr) - 1;

    while ($i < $j) {
        $temp = $arr[$i];
        $arr[$i] = $arr[$j];
        $arr[$j] = $temp;
        $i++;
        $j--;
    }

    return $arr;
}
?>