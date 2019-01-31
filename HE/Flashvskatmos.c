#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int numbits(int num){
	int count = 0,i;
	for(i=0;i<4;i++){
		(num>>i)&1?count++:1;
	}
	return count;
}
int main(){
	long long int j;
	scanf("%lld",&j);
	while(j--){
		long long int n,temp,i,j,key,numkey;
		scanf("%lld", &n);
		int * arr = malloc(8*n);
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		
		for(i=1;i<n;i++){
			key = arr [i];
			numkey = numbits(arr[i]);
			j = i - 1;
			while(j>=0 && (numkey < numbits(arr[j]))){
				arr[j+1] = arr[j];
				j --;
			}
			arr[j+1] = key;
		}
	
		for(i=0;i<n;i++){
			printf("%lld ",arr[i]);
		}
		printf("\n");
	}
	return 0;
}
