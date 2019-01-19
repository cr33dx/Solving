#include <stdio.h>
#include <stdlib.h>
int main(){
	int test;
	scanf("%d\n",&test);
	while(test--){
		int i;
		long long int size,count=0;
		scanf("%lld\n",&size);
		char *s = malloc(size);
		fgets(s,size+1,stdin);
		printf("%s\n", s);
		for(i=0;i<size;i++){
			s[i] & 1?count++:0; 
		}
		printf("%lld\n",size-count );
	}
	return 0;
}