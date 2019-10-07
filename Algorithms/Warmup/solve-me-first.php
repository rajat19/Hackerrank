<?php
function solveMeFirst($a,$b){
return ($a+$b);
}
$handle = fopen ("php://stdin","r");
$_a = fgets($handle);
$_b = fgets($handle);
$sum = solveMeFirst((int)$_a,(int)$_b);

print ($sum);
fclose($handle);

?>

