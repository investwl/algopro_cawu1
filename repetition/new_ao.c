#include <stdio.h>
#include <ctype.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int panjang;
        scanf("%d\n", &panjang);
        char stringnya[panjang+1];
        scanf("%[^\n]s", &stringnya);
        char hasil[panjang+1];
        int count_index = 0;
        for (int j = 0; j < panjang+1; j++){
            if (stringnya[j] == ' '){
                continue;
            }
            if (isalpha(stringnya[j])){
                hasil[count_index] = stringnya[j];
                count_index++;
            }
        }
        hasil[count_index] = '\0';
        printf("Case #%d: %s\n", i, hasil);
    }
}