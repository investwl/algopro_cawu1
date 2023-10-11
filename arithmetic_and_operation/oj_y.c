#include <stdio.h>

int main(){
    int test_case;
    int percent;
    unsigned long long int number;
    scanf("%d\n", &test_case);
    for (int i = 0; i < 3; i++){
        scanf("%d %lld",&percent, &number);
        double result = (double)number * (double)percent * 0.01;
        printf("%.2lf\n", result);
    }
    
}