#include <stdio.h>

int main(){
    int cage, tumbal, count = 0;
    scanf("%d\n", &cage);
    for (int i = 1; i <= cage; i++){
        scanf("%d", &tumbal);
        count += tumbal;
    }
    printf("%d\n", count);
}