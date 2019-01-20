#include <stdio.h>
#include <stdint.h>

int main(){
	uint8_t t;
	scanf("%hhd", &t);
	while(t--){
		uint32_t numb;
		scanf("%d",&numb);
		uint8_t count = 0,i;
		for(i = 0; i < 32; i++){
			(numb >> i & 1)?count ++:0;
		}
		printf("%d\n", count);
	}
	return 0;
}