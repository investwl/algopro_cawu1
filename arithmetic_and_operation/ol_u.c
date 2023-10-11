#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    // derajat / 360 * detik
    unsigned long long int derajat, detik;
    double bagi_derajat;
    double result;
    for (int i = 0; i < 3; i++){
        scanf("%llu %llu", &derajat, &detik);
        bagi_derajat = (double)derajat / 360;
        result = bagi_derajat * (double)detik;
        printf("%.2lf\n", result);
    }
    
}