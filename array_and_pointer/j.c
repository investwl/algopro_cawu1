#include <stdio.h>
#include <string.h>
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1 ; i <= test_case; i++){
        char arr_of_char[1001];
        scanf("%s", arr_of_char);
        int len = strlen(arr_of_char);
        printf("Case %d: ", i);
        for (int j = 0; j < len; j++){
            printf("%d", arr_of_char[j]);
            if (j != len-1){printf("-");}
        }
        printf("\n");
    }
}