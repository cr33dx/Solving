#include <stdio.h>

int main(){
	int test;
	scanf("%d",&test);
	while(test--){
		unsigned int num;
		int count = 0, i, j;
		scanf("%d",&num);
		for(i = 1; i < num; i++){
			for(j = i+1; j <= num; j++){
				//printf("i is =>%d j is => %d and xor is %d\n",i,j,i^j );
				if((i^j) <= num){count++;}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}