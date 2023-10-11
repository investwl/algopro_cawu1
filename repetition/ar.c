#include <stdio.h>

int main(){
    int besar, ulang;
    scanf("%d %d", &besar, &ulang);
    for (int j = 1; j <= besar; j++){
        for (int i = 0; i < ulang;i++){
            for (int j = ulang-1; j > i; j--){
                printf(" ");
            }
            for (int k = 0; k <= i; k++){
                printf("*");
            }
            printf("\n");
        }
    }
    
}