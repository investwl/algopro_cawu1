#include <stdio.h>

int main(){
    double a1, a2, a3, a4;
    double result;

    for (int i = 0; i < 3; i++){
        scanf("%lf %lf %lf %lf", &a1, &a2, &a3, &a4);
        result = ((a1/1) * 2) + ((a2/2) * 4) + ((a3/3) * 6) + ((a4/4) * 4);
        printf("%.2lf\n", result); 
    }
}