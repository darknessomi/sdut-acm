package main

import (
	"fmt"
)

func main() {
	var m int

	fmt.Scanf("%d", &m)
	if m%4 == 0 && m%100 != 0 || m%400 == 0 {
		fmt.Printf("Yes")
	} else {
		fmt.Printf("No")
	}
}
