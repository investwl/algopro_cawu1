#include <stdio.h>

int main(){
    int x;
    double y;
    double res;
    double placeholder;
    scanf("%d %lf", &x, &y);
    y = y / 100;
    res = (float)x * y;
    placeholder = x + res;
    res = placeholder * y;
    placeholder += res;
    res = placeholder * y;
    placeholder += res;
    printf("%.2lf\n", placeholder);
}