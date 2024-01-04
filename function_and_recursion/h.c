#include <stdio.h>

char fibostring(char first, char second, int length);

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1; i <= test_case ; i++){
        int length;
        char first, second;
        scanf("%d %c %c", &length, &first, &second);
        printf("Case #%d: ", i);
        fibostring(first, second, length);
        printf("\n");
    }
}

char fibostring(char first, char second, int length){
    if (length == 0){
        printf("%c", first);
        return first;
    }
    else if (length == 1){
        printf("%c", second);
        return second;
    }
    else{
        return fibostring(first, second, length - 1) + fibostring(first, second, length - 2);
    }
}