#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comparer(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int kursi;
    scanf("%d", &kursi); getchar();
    int rombongan;
    scanf("%d", &rombongan); getchar();
    int anggota[rombongan];
    for (int i = 0 ; i < rombongan ; i++){
        scanf("%d", &anggota[i]);
    }

    qsort(anggota, rombongan, sizeof(int), comparer);

    int counter = 0;
    
    for (int i = 0 ; i < rombongan; i++){
        if (anggota[i] == 0){continue;}
        if (kursi - anggota[i] >= 0){
            counter++;
            kursi -= anggota[i];
        }
    }
    printf("%d\n", counter);
}