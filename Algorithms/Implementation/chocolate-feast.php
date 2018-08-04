<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$t);
for($a0 = 0; $a0 < $t; $a0++){
    fscanf($handle,"%d %d %d",$n,$c,$m);
    $choc = intval($n/$c);
    $wrappers = $choc;
    while($wrappers >= $m) {
    	$new = intval($wrappers / $m);
    	$wrappers += $new - ($new * $m);
    	$choc += $new;
    }
    echo $choc.PHP_EOL;
}

?>

