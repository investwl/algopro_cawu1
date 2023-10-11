#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double p_persegi, a_segitiga, t_segitiga, res;
    scanf("%lf %lf %lf", &p_persegi, &a_segitiga, &t_segitiga);
    double luas_segitiga = a_segitiga * t_segitiga * 0.5;
    double luas_pp = p_persegi * a_segitiga;
    double result = (luas_segitiga * 2) + (luas_pp * 3);
    printf("%.3lf\n", result);
}