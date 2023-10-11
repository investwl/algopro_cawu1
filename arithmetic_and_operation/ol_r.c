#include <stdio.h>

int main(){
    long long int a1, b1, c1, d1;
    char s1,s2,s3,s4,s5,s6,s7;
    long long int res[3];
    scanf("%c%lld%c%lld%c%c%c%lld%c%lld%c\n", &s1,&a1,&s2,&b1,&s3,&s4,&s5,&c1,&s6,&d1,&s7);
    res[0] = (a1 + b1) * (c1 - d1);
    scanf("%c%lld%c%lld%c%c%c%lld%c%lld%c\n", &s1,&a1,&s2,&b1,&s3,&s4,&s5,&c1,&s6,&d1,&s7);
    res[1] = (a1 + b1) * (c1 - d1);
    scanf("%c%lld%c%lld%c%c%c%lld%c%lld%c", &s1,&a1,&s2,&b1,&s3,&s4,&s5,&c1,&s6,&d1,&s7);
    res[2] = (a1 + b1) * (c1 - d1);
    printf("%lld %lld %lld\n", res[0], res[1], res[2]);
}