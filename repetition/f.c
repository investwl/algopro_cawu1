#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= a; j++){
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    for (int k = 1; k <= a; k++){
        for (int l = 1; l <= a; l++){
            if (k % b == 0){
                printf("#");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");
    for (int x = 1; x <= a; x++){
        for (int z = 1; z <= a; z++){
            if (z % b == 0){
                printf("#");
            }
            else{
                printf(".");
            }
        }
        printf("\n");
    }
}