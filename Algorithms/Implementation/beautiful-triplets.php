<?php
$fp = fopen("php://stdin", "r");
$val = fgets($fp);
$val = explode(' ',$val);
$n = $val[0];
$d = $val[1];
$a = array();
$val = fgets($fp);
$val = explode(' ',$val);
$count=0;
$a = $val;
$tc=0;
for($i=0;$i<$n-2;$i++){
    $x = $a[$i];
    $j=$i+1;
    $mc = 0;
    while($j<$n && $mc<2) {
        if($a[$j] != $x+$d)
            $j++;
        else {
            $mc++;
            $x = $a[$j];
            $j = $j+1;
            if($mc==2){
                $tc++;
            }
        }
    }
}
echo $tc."
";
?>
