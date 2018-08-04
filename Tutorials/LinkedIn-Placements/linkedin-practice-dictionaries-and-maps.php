<?php
$fp = fopen("php://stdin", "r");
$n = explode(' ', trim(fgets($fp)))[0];
$dict = array();
while($n!=0) {
    $ar = explode(' ', trim(fgets($fp)));
    $nm = $ar[0]; $ph = $ar[1];
    $dict[$nm] = $ph;
    $n--;
}
while(fscanf($fp, "%s", $s)) {
    if($dict[$s]) {
        echo $s."=".$dict[$s]."
";
    }
    else echo "Not found
";
}
?>
