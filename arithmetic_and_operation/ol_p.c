#include <stdio.h>

int main(){
    double n, p;
    double res;
    for (int i = 0; i < 4; i++){
        scanf("%lf %lf", &n, &p);
        res = 100 / (100 - n) * p;
        printf("$%.2lf\n", res);
    }
}