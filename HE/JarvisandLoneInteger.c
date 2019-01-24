#include <stdio.h>
#include <stdint.h>

int main(){
    uint16_t test;
    scanf("%d", &test);
    while(test--){
        uint32_t n, i;
        uint64_t val = 0, numb;
        scanf("%d", &n);
        for(i = 0 ;i < n; i++){
            scanf("%lld", &numb);
            val = val^numb;
        }
        if(val == 0){
            printf("%d\n", -1);
        }
        else{
            printf("%lld\n", val);
        }
    }
    return 0;
}
