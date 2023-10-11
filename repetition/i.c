#include <stdio.h>

int main(){
    int jumlah_others, jumlah_total = 3, total_nilai = 0, nilai_j, nilai_l, nilai_b, nilai_tumbal;
    scanf("%d\n", &jumlah_others);
    jumlah_total += jumlah_others;
    scanf("%d %d %d", &nilai_j, &nilai_l, &nilai_b);
    total_nilai = total_nilai + nilai_b + nilai_j + nilai_l;
    for (int i = 1; i <= jumlah_others; i++){
        scanf("%d", &nilai_tumbal);
        total_nilai = total_nilai + nilai_tumbal;
    }
    int rata_rata = total_nilai / jumlah_total;
    if (nilai_j >= rata_rata){
        printf("Jojo lolos\n");
    }
    else{
        printf("Jojo tidak lolos\n");
    }
    if (nilai_l >= rata_rata){
        printf("Lili lolos\n");
    }
    else{
        printf("Lili tidak lolos\n");
    }
    if (nilai_b >= rata_rata){
        printf("Bibi lolos\n");
    }
    else{
        printf("Bibi tidak lolos\n");
    }
}