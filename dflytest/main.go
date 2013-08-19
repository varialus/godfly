package main

import (
	"fmt"
	"os"
)

func main() {
	if f, err := os.Open("/etc"); err != nil {
		fmt.Println("error opening /etc; err ==", err.Error)
	} else {
		defer f.Close()
		if names, err := f.Readdirnames(-1); err != nil {
			fmt.Println("error reading directory names; err ==", err.Error)
		} else {
			if len(names) > 1 {
				fmt.Println("Test Passed")
			} else {
				fmt.Println("Test Failed")
			}
		}
	}
}
