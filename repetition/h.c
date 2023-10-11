#include <stdio.h>

int main(){
    int sisi;
    scanf("%d", &sisi);
    for (int i = 0; i < sisi; i++){
        for (int j = 0; j < sisi; j++){
            printf("*");
        }
        printf("\n");
    }
}