#include <stdio.h>

int main(){
    int test_case, besar;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        scanf("%d", &besar);
        printf("Case #%d:\n", i);
        for (int k = 1; k <= besar;k++){
            for (int j = 1; j <= besar; j++){
                if (j<=besar-k){printf(" ");}
                else{
                    if ((k+j)%2 == 0){printf("*");}
                    else{printf("#");}
                }
            }
            printf("\n");
        }
    }
}