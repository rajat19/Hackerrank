

/*
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    let f = s;
    try {
        const sp = s.split("");
        const re = sp.reverse();
        f = re.join('');
    } catch (e) {
        console.log(e.message);
    } finally {
        console.log(f);
    }
}

