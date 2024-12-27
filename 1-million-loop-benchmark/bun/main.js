console.time('Bun.js');
let total = 0;
for (let i = 0; i < 1000000000; i++) {
    total += i;
}
console.timeEnd('Bun.js');
console.log(`[Bun.js] Sum: ${total}`);
