/**************************************
    Problem id  : SDUT OJ 1194
    User name   : zhangruiti
    Result      : error
**************************************/
package main

import "fmt"

func main() {
	var (
		x, sum, t, item float32
		n, i            int
	)

	for fmt.Scanf("%f %d", &x, &n) == 2 {

		t = x * x
		item = 1.0
		sum = 1.0

		for i := 1; i <= n; i++ {
			item *= -t
			item /= (i*2 - 1) * (i * 2)
			sum += item

		}
	}

	fmt.Printf("%.4f\n", sum)

}
