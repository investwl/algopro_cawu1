#include <stdio.h>

int main(){
    int num, i = 0, count, rem;
    char res[10];
    scanf("%d", &num);
    do {
        count = num / 16;
        rem = num % 16;
        num = count;
        res[i] = rem;
        i++;
    }
    while (num > 0);
    for (int k = i-1; k >= 0; k--){
        if (res[k] == 10){
            printf("a");
        }
        else if (res[k] == 11){
            printf("b");
        }
        else if (res[k] == 12){
            printf("c");
        }
        else if (res[k] == 13){
            printf("d");
        }
        else if (res[k] == 14){
            printf("e");
        }
        else if (res[k] == 15){
            printf("f");
        }
        else{
            printf("%d", res[k]);
        }
    }
    printf("\n");
}