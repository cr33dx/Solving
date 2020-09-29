#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, i = 0;
	scanf("%d", &n);
	int *arr = malloc(sizeof(int) * n);
	for (;i<n;i++){
		arr[i] = i;
	}
	unions(arr, 3, 4);
	unions(arr, 4, 9);
	unions(arr, 9, 1);
	printArr(arr, n);
	printf("\nis connected? %d", connected(arr, 1,29));
	return 0;
}

int printArr(int *arr, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d", arr[i]);
	}
	return 1;
}

int findRoot(int *arr, int p){
	while(p != arr[p]){
		p = arr[p];
	}
	return p;
}

int unions(int *arr, int p, int s){
	int rp = findRoot(arr, p);
	int rs = findRoot(arr, s);
	arr[rp] = rs;
	return 1;
}

int connected(int *arr, int p, int s){
	return (findRoot(arr, p) == findRoot(arr, s));
}
