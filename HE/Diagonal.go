package main

import "fmt"

func main(){
	x := [][]int{{1,2}, {3,4}, {5,6}, {7,8}}
	for i, val := range(x){
		fmt.Println(i,val)
	}
}
