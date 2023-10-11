#include <stdio.h>
#include <math.h>
int main(){
    // win atleast once
    // segitiga pascal, selalu exclude yg depan
    // 1 = 1
    // 1 2 1 = 4
    // 1 3 3 1 = 8
    // 1 4 6 4 1 = 16
    // 1 5 10 10 5 1 = 32
    // 1 6 15 20 15 6 1 = 64

    int i;
    scanf("%d", &i);
    unsigned long long int res = pow(2, i);
    if (i == 1){ printf("%d\n", 1);}
    else{
        printf("%llu\n", res - 1);
    }
}