<?php
ini_set('memory_limit','32M');
$handle = fopen ("php://stdin","r");
fscanf($handle,"%s",$s);
fscanf($handle,"%ld",$n);
$l = strlen($s);
$q = intval($n/$l); $r = $n%$l;
$news = "";
$a = substr_count($s, 'a') * $q;
$news .= substr($s, 0, $r);
$ans = substr_count($news, 'a') + $a;
echo $ans;
?>

