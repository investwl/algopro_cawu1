#include <stdio.h>

int main(){
    int i, rem, count, j = 0;
    char res[10];
    scanf("%d", &i);
    do {
        count = i / 8;
        rem = i % 8;
        i = count;
        res[j] = rem;
        j++;
    }
    while (i > 0);
    for (int k = j-1; k >= 0; k--){
        printf("%d", res[k]);
    }
    printf("\n");
}