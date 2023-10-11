#include <stdio.h>

int main(){
    int test_case, count_odd, count_even, panjang_angka, terima_angka;
    scanf("%d\n", &test_case);
    for (int i = 0; i < test_case; i++){
        count_even = 0;
        count_odd = 0;
        scanf("%d", &panjang_angka);
        for (int j = 0; j < panjang_angka; j++){
            scanf("%d", &terima_angka);
            if (terima_angka % 2 == 0){
                count_even++;
            } else if (terima_angka % 2 == 1){
                count_odd++;
            }
        }
        printf("Odd group : %d integer(s).\nEven group : %d integer(s).\n\n", count_odd, count_even);
    }
}