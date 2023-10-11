#include <stdio.h>

int convert(int c){
    float c_to_r = (float)c * 0.8;
    float c_to_f = (1.8 * (float)c) + 32;
    float c_to_k = (float)c + 273;
    printf("%.2f %.2f %.2f\n", c_to_r, c_to_f, c_to_k);
}

int main(){
    int test_case, c1, c2, c3;
    scanf("%d\n", &test_case);
    scanf("%d\n", &c1);
    scanf("%d\n", &c2);
    scanf("%d", &c3);
    
    convert(c1);
    convert(c2);
    convert(c3);
}