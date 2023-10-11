#include <stdio.h>

int main(){
    unsigned long long int a, b , c, d;
    scanf("%llu %llu %llu %llu", &a, &b, &c, &d);
    if ((a*b) == (c-d)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}