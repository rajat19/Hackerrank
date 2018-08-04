<?php
$fp = fopen("php://stdin", "r");
$text = fgets($fp);

$needle = '"'; $lastPos = 0; $positions = array();
while (($lastPos = strpos($text, $needle, $lastPos))!== false) {
    $positions[] = $lastPos;
    $lastPos = $lastPos + strlen($needle);
}
$quoted = [];
for($i=0; $i<count($positions); $i+=2) {
    $sub = substr($text, $positions[$i], $positions[$i+1] - $positions[$i]+1);
    $n = str_replace('.', '@', $sub);
    $n = str_replace('?', '@', $n);
    $n = str_replace('!', '@', $n);
    //$quoted[$i] = $sub;
    //$add = "$$[$i]";
    $text = str_replace($sub, $n, $text);
}

$exploded = explode('.', $text);
$mini = '';
$dot_sep = [];
foreach($exploded as $sen) {
    $count = substr_count($sen, ' ');
    $mini .= $sen.'. ';
    if ($count > 0) {
        array_push($dot_sep, $mini);
        $mini = '';
    }
}

$exc_sep = [];
foreach($dot_sep as $sen) {
    $s = str_replace('!', "!
", $sen);
    array_push($exc_sep, $s);
    /*$exc = explode('!', $sen);
    for($i=0; $i<count($exc); $i++) {
        if($i < $count - 1) {
            array_push($exc_sep, $exc[$i].'!');    
        }
        array_push($exc_sep, $exc[$i]);
    }*/
}

$que_sep = [];
foreach($exc_sep as $sen) {
    $s = str_replace('?', "!
", $sen);
    array_push($que_sep, $s);
    /*$que = explode('!', $sen);
    for($i=0; $i<count($que); $i++) {
        if($i < $count - 1) {
            array_push($que_sep, $que[$i].'?');    
        }
        array_push($que_sep, $que[$i]);
    }*/
}

foreach($que_sep as $sen) {
    echo $sen."
";
}
?>
