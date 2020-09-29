package main

import ("fmt")

var sz, arr []int
func main(){
	var i int
	fmt.Scanf("%d", &i)
	arr = make([]int, i)
	sz = make([]int, i)
	for id, _ := range(arr){
		arr[id] = id
		sz[id] = 1
	}
	union(1,2)
	union(3,4)
	union(1,3)
	union(5,6)
	union(5,7)
	union(0,7)
	fmt.Println(isConnected(0,7))
}

func isConnected(p int, s int) bool {
	return (findRoot(s) == findRoot(p))
}

func findRoot(p int) int {
	for p != arr[p]{
		p = arr[p]
	}
	return p
}

func union(p int, s int){
	rp := findRoot(p)
	rs := findRoot(s)
	if sz[rp] >= sz[rs] {
		arr[s] = rp
		sz[rp] += sz[rs]
	}else{
		arr[p] = rs
		sz[rs] += sz[rp]
	}
}
