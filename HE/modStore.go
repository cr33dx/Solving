package main

import "fmt"

func main(){
	var modStore = make(map[int64]int64)
	var N, i int64
	var A []int64
	var num, K, value int64
	var strength int64
	fmt.Scanf("%d%d", &N, &K)
	for i =0;i< N; i++ {
		fmt.Scanf("%d", &num)
		A = append(A,num)
	}
	for i = 0; i< N ; i++{
		mod := A[i] % K
		modStore[mod] += 1
	}
	for _, value = range(modStore){
		strength += value * (value - 1)
	}
	fmt.Println(strength)
}
