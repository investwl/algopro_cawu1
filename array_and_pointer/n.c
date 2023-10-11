#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n",&test_case);
    for (int i = 1 ; i <= test_case; i++){
        int length;
        scanf("%d", &length);
        getchar();
        long long int boxes[length];
        long long int paling_max = -1000000;
        long long int max_kurang = -1000000;
        for (int l = 0; l < length; l++){
            scanf("%lld", &boxes[l]);
            if (boxes[l] >= paling_max){
                max_kurang = paling_max;
                paling_max = boxes[l];
            }
            else if (boxes[l] >= max_kurang){
                max_kurang = boxes[l];
            }
        }
        printf("Case #%d: %lld\n",i,  paling_max + max_kurang);
    }
}