#include <stdio.h>

int main(){
    int amount_of_prizes;
    scanf("%d\n", &amount_of_prizes);
    int array_num[amount_of_prizes]; int tumbal; int modus = 1;
    for (int i = 0; i < amount_of_prizes; i++){
        scanf("%d", &array_num[i]);
    }
    for (int j = 0; j < amount_of_prizes; j++){
        tumbal = 0;
        for (int k = 0; k < amount_of_prizes; k++){
            if (array_num[k] == array_num[j]){
                tumbal++;
            }
        }
        if (tumbal > modus){modus = tumbal;}
    }
    printf("%d\n", modus);
}