#include <stdio.h>

int main(){
    int test_case, panjang_angka, terima_angka;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        unsigned long long int total_item = 0;
        scanf("%d", &panjang_angka);
        for (int j = 0; j < panjang_angka; j++){
            scanf("%d", &terima_angka);
            total_item += terima_angka;
        }
        printf("Case #%d: %llu\n",i,  total_item);
    }
}