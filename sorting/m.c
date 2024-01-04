#include <stdio.h>
#include <stdlib.h>

int comparer(const void* a, const void* b){
    return (*(long long int*)a - *(long long int*)b);
}

int main(){
    long long int panjang;
    scanf("%lld", &panjang); getchar();
    long long int arr[panjang];
    for (int i = 0; i < panjang; i++){
        scanf("%lld", &arr[i]);
    }
    qsort(arr, panjang, sizeof(long long int), comparer);
    int tengah = 0;
    tengah = (panjang / 2) + 1;

    for (int i = tengah; i < panjang ; i++){
        printf("%lld", arr[i]);
        if (i != panjang - 1){printf(" ");}
    }
    printf("\n");
}