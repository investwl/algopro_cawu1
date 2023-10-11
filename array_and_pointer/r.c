#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        char str_input[1001];
        scanf("%s", str_input);
        getchar();
        int how_many_change;
        scanf("%d", &how_many_change);
        getchar();
        for (int j = 0; j < how_many_change; j++){
            char what_lett, to_lett;
            scanf("%c %c", &what_lett, &to_lett);
            int str_length = strlen(str_input);
            for (int k = 0; k < str_length; k++){
                if (str_input[k] == what_lett){str_input[k] = to_lett;}
            }
            getchar();
        }
        printf("Case #%d: %s\n", i, str_input);
    }
}