#include <stdio.h>
#include <stdlib.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int length;
        unsigned long long int min_gap;
        scanf("%d", &length);
        for (int j = 2; j <= length; j++){
            unsigned long long int tumbal1, tumbal2;
            if (j == 2){
                scanf("%llu", &tumbal1);
                getchar();
                scanf("%llu", &tumbal2);
                min_gap = abs(tumbal2 - tumbal1);
                continue;
            }
            tumbal1 = tumbal2;
            scanf("%llu", &tumbal2);
            if (abs(tumbal2 - tumbal1) < min_gap){min_gap = abs(tumbal2 - tumbal1);}
        }
        printf("Case #%d: %llu\n", i, min_gap);
    }
}