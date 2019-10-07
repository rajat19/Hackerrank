

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    const a = [], b = [];
    const vowels = ['a', 'e', 'i', 'o', 'u'];
    for (let i = 0; i < s.length; i++) {
        if (vowels.indexOf(s[i]) >= 0) {
            a.push(s[i]);
        }
        else b.push(s[i]);
    }
    for (let i = 0; i < a.length; i++) {
        console.log(a[i]);
    }
    for (let i = 0; i < b.length; i++) {
        console.log(b[i]);
    }
}

