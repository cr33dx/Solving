package main

import (
	"fmt"
	)

type Node struct{
	data int
	left * Node
	right * Node
}

func (n* Node) insert(data int) error {
	if data < n.data {
		if n.left == nil {
			n.left = &Node{data, nil, nil}
			return nil
		}
		return n.left.insert(data)
	} else {
		if n.right == nil {
			n.right = &Node{data, nil, nil}
			return nil
		}
		return n.right.insert(data)
	}
}

func (n *Node) inOrderTraversal() {
	if n == nil {
		return
	}

	n.left.inOrderTraversal()
	fmt.Println(n.data)
	n.right.inOrderTraversal()
}

func (root *Node) diameter() int {
	if root == nil {
		return 0
	}
	maxLength := 0
	depth(root, &maxLength)
	return(maxLength)
}

func depth(root *Node, maxLength *int) int {
	if root == nil {
		return 0
	}
	l := depth(root.left, maxLength)
	r := depth(root.right, maxLength)
	*maxLength = Max(l + r, *maxLength)
	return Max(l, r) + 1
}

func Max(a, b int)int{
	if a >= b{
		return a
	}else{
		return b
	}
}

func main(){
	x := &Node{8,nil,nil}
	x.insert(2)
	x.insert(1)
	x.insert(4)
	x.insert(16)
	x.insert(32)
	x.insert(64)
	x.insert(0)
	fmt.Println(x.diameter() + 1)
}
