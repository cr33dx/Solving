#include <stdio.h>
#include <stdint.h>
int main(){
uint8_t test ,c = 0;
scanf("%hhd", &test);
while(test --){
	uint16_t n ,i;
	uint32_t z, numb;
	scanf("%d", &z);
	scanf("%hd", &n);
	for(i =0 ;i < n; i ++){
		scanf("%d",&numb);
		z &= numb;
	}
	z?printf("No\n"):printf("Yes\n");
}
	return 0;
}
