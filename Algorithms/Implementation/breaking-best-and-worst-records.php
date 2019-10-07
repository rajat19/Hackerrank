<?php

/*
 * Complete the breakingRecords function below.
 */
function breakingRecords($score) {
    $max = $score[0]; $min = $score[0]; $cmx = 0; $cmn = 0;
    for($i=1; $i<count($score); $i++) {
        if ($score[$i] > $max) {
            $cmx++;
            $max = $score[$i];
        }
        if ($score[$i] < $min) {
            $cmn++;
            $min = $score[$i];
        }
    }
    return [$cmx, $cmn];
}

$fptr = fopen(getenv("OUTPUT_PATH"), "w");

$__fp = fopen("php://stdin", "r");

fscanf($__fp, "%d\n", $n);

fscanf($__fp, "%[^\n]", $score_temp);

$score = array_map('intval', preg_split('/ /', $score_temp, -1, PREG_SPLIT_NO_EMPTY));

$result = breakingRecords($score);

fwrite($fptr, implode(" ", $result) . "\n");

fclose($__fp);
fclose($fptr);
