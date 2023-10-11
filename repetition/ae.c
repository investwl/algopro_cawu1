#include <stdio.h>

int main(){
    // rumus = 2 x 3.14 x r x (r + t)
    int test_case;
    scanf("%d\n", &test_case);
    int jari_jari, tinggi;
    double result;
    for (int i = 1; i <= test_case; i++){
        scanf("%d %d", &jari_jari, &tinggi);
        result = 2 * 3.14 * jari_jari * (jari_jari + tinggi);
        printf("Case #%d: %.2lf\n", i, result);
    }
}