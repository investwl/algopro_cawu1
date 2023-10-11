#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int length;
        scanf("%d", &length);
        char array_of_letters[length];
        char start_input = 'a';
        for (int j = 0; j < length; j++){
            array_of_letters[j] = start_input;
            start_input++;
        }
        printf("Case #%d: ", i);
        for (int k = 0 ; k < length; k++){
            printf("%c", array_of_letters[k]);
        }
        printf("\n");
        
    }
}