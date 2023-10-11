#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    float c = (float)b / (float)a;
    printf("%.4f%%\n", c * 100);
}