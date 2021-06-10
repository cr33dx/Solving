package main

import "fmt"

func sumOfDigits(n uint64) uint64 {
	var sum uint64
	for sum=0;n>0;sum,n= sum+n%10, n/10{}
	return sum
}

func digitCube(n, k, last_cube uint64) uint64{
	digitSum := sumOfDigits(n)
	cube := digitSum * digitSum * digitSum
	if(k == 1 || last_cube == cube){
		return cube
	}
	return digitCube(cube, k - 1, cube)
}

func main(){
	var (
		T,i uint32
		n, k uint64
	)
	fmt.Scanf("%d", &T)
	for i=0;i<T;i++ {
		fmt.Println("value of i is", i)
		fmt.Scanf("%d%d",&n , &k)
		fmt.Println(digitCube(n, k, 1))
	}
}
