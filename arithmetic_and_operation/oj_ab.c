#include <stdio.h>

int main(){
    int base = 100;
    int bonus = 50;
    int i;
    unsigned long long int res = 0;
    scanf("%d", &i);
    getchar();
    for (int k = 0; k < i; k++){
        res += base;
        res = res + (bonus * k);
    }
    printf("%llu\n", res);
}