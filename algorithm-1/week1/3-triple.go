package main

import (
	"fmt"
	"os"
	"strconv"
	"strings"
	"time"
)


func main(){
	var arr []int
	for _, val := range(strings.Split(os.Args[1:][0], ",")){
		i , err := strconv.Atoi(val)
		if err != nil{
			fmt.Println(err)
		}
		arr = append(arr, i)
	}
	start := time.Now()
	count := 0
	for i := 0; i < len(arr);i++{
		for j := i+1; j < len(arr); j++ {
			for k := j + 1; k < len(arr); k++ {
				if(arr[i] + arr[j] + arr[k]) == 0{
					//fmt.Println(arr[i],arr[j], arr[k])
					count++
				}
			}
		}
	}
	elapsed := time.Since(start)
	fmt.Println(elapsed)
}
