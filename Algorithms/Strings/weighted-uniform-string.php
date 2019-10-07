<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%s",$s);
fscanf($handle,"%d",$n);
$l = strlen($s);
$mega = array();
for($i=0; $i<$l; $i++) {
    $w = 0;
    $x = $s[$i];
    $j = $i;
    while($x == $s[$j]) {
        $w += ord($x) - 96;
        $mega[] = $w;
        $j++;
    }
}
for($a0 = 0; $a0 < $n; $a0++){
    fscanf($handle,"%d",$x);
    if(in_array($x, $mega)) echo "Yes";
    else echo "No";
    echo "\n";
}

?>
