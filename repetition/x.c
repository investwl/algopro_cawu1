#include <stdio.h>

int main(){
    int start = 1, num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        start = (start * 2) + 1;
    }
    printf("%d\n", start);
}