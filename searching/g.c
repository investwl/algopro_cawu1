#include <stdio.h>

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1; i <= test_case ; i++){
        int banana_in_fridge, min_weight;
        scanf("%d %d", &banana_in_fridge, &min_weight); getchar();
        int banana_weight[banana_in_fridge];
        int eat = 0;
        for (int j = 0 ; j < banana_in_fridge ; j++){
            scanf("%d", &banana_weight[j]);
            if (banana_weight[j] >= min_weight){eat++;}
        }
        printf("Case #%d: %d\n", i, eat);
    }
}