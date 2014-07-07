package main

import "fmt"

func main() {
	var (
		n             int
		q             int
		s             int
		a             int
		d, e, f, g, h = 0, 0, 0, 0, 0
	)

	fmt.Scanf("%d", &n)
	for a = 1; a <= n; a++ {
		fmt.Scanf("%d", &s)
		q = s / 10
		switch q {
		case 9:
			d++
			break
		case 8:
			f++
			break
		case 7:
			e++
			break
		case 6:
			g++
			break
		default:
			h++
			break

		}

	}

	fmt.Printf("A %d\nB %d\nC %d\nD %d\nE %d\n", d, f, e, g, h)

}
