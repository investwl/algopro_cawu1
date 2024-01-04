#include<stdio.h>
#include<string.h>

char reverse_str(char *user_input, int length){
    // int temp;
    if(length > -1){
        printf("%c", user_input[length]);
        return reverse_str(user_input, length-1);
    }
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for(int i=1; i<=test_case; i++){
        char user_input[1001];
        scanf("%[^\n]s", &user_input); getchar();
        int length = strlen(user_input) - 1;
        printf("Case #%d: ", i);
        reverse_str(user_input, length);
        printf("\n");
    }
}