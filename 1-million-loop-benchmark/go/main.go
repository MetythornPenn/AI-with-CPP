package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()
	total := 0
	for i := 0; i < 1000000000; i++ {
		total += i
	}
	duration := time.Since(start)
	fmt.Printf("[Go] Sum: %d, Time: %.4f sec\n", total, duration.Seconds())
}
