#include <stdio.h>

int main(){
    int a, b ,c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    int res_a = (a / 10) % 10;
    int res_b = (b / 10) % 10;
    int res_c = (c / 10) % 10;
    printf("%d\n%d\n%d\n", res_a, res_b, res_c);
}