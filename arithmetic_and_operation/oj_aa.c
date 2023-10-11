#include <stdio.h>

int main(){
    int task, mid, final;
    float result;
    scanf("%d %d %d", &task, &mid, &final);
    result = (task * 0.2) + (mid * 0.3) + (final * 0.5);
    printf("%.2f\n", result);
}