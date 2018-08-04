<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
$arr_temp = fgets($handle);
$arr = explode(" ",$arr_temp);
array_walk($arr,'intval');

while(count($arr) != 0) {
	$k = 0; $narr = array();$i = 0;
	while($i < count($arr)) {
		if($arr[$i] != 0) {
			$narr[$k] = $arr[$i];
			$k++;
		}
		$i++;
	}
    if(count($narr) > 0)
    	echo count($narr).PHP_EOL;
	$min = min($narr);$i = 0;
	while($i < count($narr)) {
		$narr[$i] = $narr[$i] - $min;
		$i++;
	}
	$arr = $narr;
}

?>

