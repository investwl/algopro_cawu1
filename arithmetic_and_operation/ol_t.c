#include <stdio.h>

int main(){
    int hs1, ms1, he1, me1;
    char cc1[11];
    char sym;
    for (int i = 1; i <= 5; i++){
        scanf("%s %02d:%02d-%02d:%02d", &cc1, &hs1, &ms1, &he1, &me1);
        printf("%s %02d:%02d-%02d:%02d\n", cc1, hs1-1, ms1, he1-1, me1);
    }
    
}