#include <stdio.h>

int main(){
    int i, j;
    scanf("%d %d", &i, &j);
    for (int k = 0; k <= j; k++){
        printf("%d\n", i);
        i++;
    }
}