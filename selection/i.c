#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    // hitung angka asli * diskom, jika angka asli * diskon melewati limit, maka hasil = limit
    // else = ya sesuai hasil diskon
    unsigned int harga_asli, diskon_persen, limit, jumlah_diskon;
    for (int i = 1; i <= test_case; i++){
        scanf("%u %u %u", &harga_asli, &diskon_persen, &limit);
        if (harga_asli * diskon_persen * 0.01 >= limit){
            jumlah_diskon = limit;
        }
        else if (harga_asli * diskon_persen * 0.01 <= limit){
            limit = harga_asli * diskon_persen * 0.01;
        }
        printf("Case #%d: %u\n", i, limit);
    }
}