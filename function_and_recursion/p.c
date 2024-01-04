#include <stdio.h>

int jobonacci(int angka);

int main(){
    int angka;
    scanf("%d", &angka);
    printf("%d\n", jobonacci(angka));
}

int jobonacci(int angka){
    if (angka == 0){
        return 0;
    }
    else if (angka == 1){
        return 1;
    }
    else if (angka % 2 == 1){
        return jobonacci(1);
    }
    else{
        return jobonacci(angka - 1) + jobonacci(angka - 2);
    }
}