#include <stdio.h>
#include <stdint.h>
int i = 0;
int numBits(int num){
	int place = 0;
	for(i=0;i<31;i++){
		place += (num>>i) & 1;
	}
	return(place);
}
int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		uint32_t num,i,div,quo,count=0;
		scanf("%d",&num);
		//num /= 2;
		if(num!=1){
			for(i=num/2;i<=num;i++){
					div = numBits(i);
					quo = numBits(num/i);
					if(div>=quo){
						count++;
					}
				}
			
		printf("%d\n", count);
	}
	else{
		printf("%d\n", 1);
	}
	}
	return(0);
}