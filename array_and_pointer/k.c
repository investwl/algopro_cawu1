#include <stdio.h>
#include <string.h>
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1 ; i <= test_case; i++){
        char str_input[1001];
        scanf("%s", str_input);
        int len = strlen(str_input);
        printf("Case #%d : ", i);
        for (int j = len-1; j >= 0; j--){
            printf("%c", str_input[j]);
        }
        printf("\n");
    }
}