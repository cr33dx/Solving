#include <stdio.h>
#include <math.h>
int i,x;
void binary(long long int numb, int * arr){
	for(i = 0; i <63 ; i++){
		x = numb >> i;
		if(x&1){arr[i] = 1;} 
		else{arr[i] = 0;}	
	}
}
void decimal(int *arr){
	long double num = 0;
	for(i = 0;i < 63; i++){
		num += arr[i] * pow(2,i);
	}
	printf("%lld\n", (long long int)num);
}
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
		long long int numb;
		int arr[64],c=0,flag=0;
		scanf("%lld",&numb);
		//printf("%lld\n", numb);
		binary(numb, &arr[0]);
		for (i = 0; i < 63; ++i)
		{
			if(flag == 0){
				if((arr[i] & 1) ==0){
					arr[i] = 1;
					flag = 1;
				}
			}
		}
		decimal(&arr[0]);
	}
	return 0;
}