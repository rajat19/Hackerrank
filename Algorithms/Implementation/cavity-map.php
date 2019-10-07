<?php

$handle = fopen ("php://stdin","r");
fscanf($handle,"%d",$n);
$grid = array();
for($grid_i = 0; $grid_i < $n; $grid_i++){
   fscanf($handle,"%s",$grid[]);
}
for($i = 0; $i < $n; $i++) {
    for($j = 0; $j < $n; $j++) {
        if($i>=1 && $i <$n-1 && $j>=1 && $j < $n-1) {    
            $main = (int)$grid[$i][$j];
            $l = (int)$grid[$i][$j - 1];
            $r = (int)$grid[$i][$j + 1];
            $u = (int)$grid[$i - 1][$j];
            $b = (int)$grid[$i + 1][$j];
            if($main > $l && $main >$r && $main >$u && $main >$b)
                $grid[$i][$j] = 'X';
        }
        echo $grid[$i][$j];
    }
    echo PHP_EOL;
}

?>
