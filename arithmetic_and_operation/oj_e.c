#include <stdio.h>

int main(){
    int i, j;
    scanf("%d %d", &i, &j);
    printf("%d\n%d\n%d\n%d\n%d\n", (i + j), (i - j), (i * j), (i / j), (i % j));
}