#include <stdio.h>

int main(){
    unsigned int a, b, c ,d, res_left, res_right;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    res_left = a * b;
    res_right = c + d;
    if (res_left > res_right){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}