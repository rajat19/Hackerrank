<?php

$handle = fopen ("php://stdin", "r");
$orig = strtolower(trim(fgets($handle)));
$text = explode(' ', $orig);
$orig = " $orig ";
$c = count($text);
$mc = 0;
$ms = '';
for($i=0; $i<$c-2; $i++) {
    $s = ' '.$text[$i].' '.$text[$i+1].' '.$text[$i+2].' ';
    $sub = substr_count($orig, $s);
    if($sub > $mc) {
        $mc = $sub;
        $ms = trim($s);
    }
}
echo $ms;
?>

