#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    // float result = (((float)b / (float)a) - 1) * 100;
    // printf("%.2f%%\n", result * -1);
    int c = a - b;
    float result = (float)c / (float)a * 100;
    printf("%.2f%%\n", result); 
}