var n = require('fs').readFileSync('/dev/stdin', 'utf8');
for (var i = 1; i <= 9; i++) {
    if (n % i === 0 && n / i < 10) {
        console.log('Yes');
        process.exit(0);
    }
}
console.log('No');