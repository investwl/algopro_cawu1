#include <stdio.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    float result = (float)x / (float)y;
    printf("%.2f%%\n", result * 100);
}