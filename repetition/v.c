#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int besar;
        scanf("%d", &besar);
        for (int j = 1; j <= besar; j++){
            for (int k = 1; k <= besar; k++){
                if (j == 1 || k == 1 || j == besar || k == besar || j == k || k == (besar-j+1)){
                    printf("*");
                }
                else{printf(" ");}
            }
            printf("\n");
        }
        printf("\n");
    }
}