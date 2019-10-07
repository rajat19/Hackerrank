

function getGrade(score) {
    if (score <= 5) return 'F';
    if (score <= 10) return 'E';
    if (score <= 15) return 'D';
    if (score <= 20) return 'C';
    if (score <= 25) return 'B';
    return 'A'; 
}

