#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1 ; i <= test_case ; i++){
        int jumlah_huruf;
        unsigned long long int angka_k;
        scanf("%d %llu", &jumlah_huruf, &angka_k);
        getchar();
        char terima_huruf[101];
        scanf("%s", &terima_huruf);
        for (int j = 0; j < jumlah_huruf; j++){
            terima_huruf[j] = (((terima_huruf[j] - 'a')+ angka_k) % 26) + 'a'; 
            // terima_huruf[j] -= 'a';
            // terima_huruf[j] += angka_k;
            // terima_huruf[j] %= 26;
            // terima_huruf[j] += 'a';
        }
        printf("Case #%d: %s\n", i, terima_huruf);
    }
}