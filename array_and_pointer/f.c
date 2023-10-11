#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <=test_case; i++){
        int count = 0;
        int huruf_random[26] = {};
        char tumbal[100001] = {};
        scanf("%s", tumbal);
        int numbal;
        int limit_word = strlen(tumbal);
        for (int l = 0; l < limit_word; l++){
            numbal = tumbal[l] - 'a';
            huruf_random[numbal] = 1;
        }
        for (int l = 0; l < 26; l++){
            if (huruf_random[l] == 1){count++;}
        }
        printf("Case #%d: ", i);
        if (count % 2 == 0){printf("Yay\n");}
        else {printf("Ewwww\n");}
    }
}