#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, no;
	scanf("%d", &no);
	int *x  = malloc(no * sizeof(int));
	for (i = 0; i < no; i++){
		x[i] = i;
	}
	unionOp(x,2,3,no);
	unionOp(x,3,6,no);
	unionOp(x,4,6,no);
	unionOp(x,1,6,no);
	unionOp(x,6,9,no);
	unionOp(x,3,99,no);
	printf("is connected? %d \n", isConnected(x,1,99));
	printArray(x, no);
	return 0;
}

int printArray(int *ptr, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",ptr[i]);
	}
	return 1;
}

int isConnected(int * arr, int pid, int sid){
	return(arr[pid] == arr[sid]);
}

int unionOp(int *x, int pid, int sid, int size){
	int i = 0;
	for(;i<size;i++){
		if(x[i] == x[pid]){
			x[i] = x[sid];
		}
	}
	return 1;
}
