#include <stdio.h>

int main(){
    unsigned long long int test_case, angka;
    scanf("%llu\n", &test_case);
    for (int i = 0; i < test_case; i++){
        int count = 0;
        scanf("%llu", &angka);
        int pembagi = 10;
        while (angka / 10 > 0){
            angka /= 10;
            count++;
        }
        printf("Case #%d: %d\n", i+1, count+1);
    }
}