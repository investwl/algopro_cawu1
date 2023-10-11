#include <stdio.h>

int main(){
    int test_case;
    double a, b, c ,d;
    double res;
    scanf("%d\n", &test_case);
    for (int i = 0; i < 3; i++){
        scanf("%lf %lf %lf %lf", &a, &b ,&c, &d);
        res = ((a/1) * 2) + ((b/2) * 4) + ((c/3) * 4) + ((d/4) * 2);
        printf("%.2lf\n", res); 
    }
}