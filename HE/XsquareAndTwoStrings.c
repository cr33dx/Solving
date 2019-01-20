#include <stdio.h>

int main(){
	unsigned int t;
	scanf("%d\n",&t);
	while(t--){
		int i =0,j, count = 0,arr[26] = {0}, flag = 0;
		char f[100001], s[100001];

		/*while((f[i++] = getchar_unlocked()) != '\n'){if(i > 1000)break;}
		i = 0;
		while((s[i++] = getchar_unlocked()) != '\n'){if(i > 1000)break;}	
		*/
		scanf("%s%s",f,s);
		i=0;
		while(f[i] != 10){
			//printf("value : %d\n",f[i]);
			arr[f[i++] - 97] = 1;
		}

		i = 0;
		while(s[i] != 10){
			if(arr[s[i]-97]){
				flag = 1;
				break;
			}
			i++;
		}
		flag == 1?printf("Yes\n"):printf("No\n");
	}
	return 0;
}