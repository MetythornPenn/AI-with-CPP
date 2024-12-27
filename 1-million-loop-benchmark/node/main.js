console.time('Node.js');
let total = 0;
for (let i = 0; i < 1000000000; i++) {
    total += i;
}
console.timeEnd('Node.js');
console.log(`[Node.js] Sum: ${total}`);
