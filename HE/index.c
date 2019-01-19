#include <stdio.h>
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		long int cas;
		long long int num;
		int arr[32] = {0},i,max = 0, value = 0;
		scanf("%ld",&cas);
		while(cas--){
			scanf("%lld",&num);
			for(i = 0;i < 31; i++){
					(num >> i) & 1?arr[i]++:1;
			}
		}
		for(i = 0;i < 31; i++){
			//printf("\n value are : %d of %d",arr[i], i);
			if(arr[i]>max){max = arr[i];value = i;}
		}	
		printf("%d\n",value);
	}
	return 0;
}