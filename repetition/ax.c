#include <stdio.h>

int main(){
    long long int how_many, num, total = 0;
    scanf("%lld\n", &how_many);
    for (int i = 0; i < how_many; i++){
        scanf("%lld", &num);
        if (num > 0){total += num;}
    }
    printf("%lld\n", total);
}