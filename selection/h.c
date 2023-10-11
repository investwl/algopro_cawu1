#include <stdio.h>
#include <stdlib.h>
int main(){
    char a, b, c;
    int i;
    scanf("%c %c %c", &a, &b, &c);
    if (a < b && b < c){
        printf("%d %d %d\n", 1, 2, 3);
    }
    else if (a < c && c < b){
        printf("%d %d %d\n", 1, 3, 2);
    }
    else if (b < a && a < c){
        printf("%d %d %d\n", 2, 1, 3);
    }
    else if (b < c && c < a){
        printf("%d %d %d\n", 2, 3, 1);
    }
    else if (c < a && a < b){
        printf("%d %d %d\n", 3, 1, 2);
    }
    else if (c < b && b < a){
        printf("%d %d %d\n", 3, 2, 1);
    }
}