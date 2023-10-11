#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1 ; i <= test_case; i++){
        int amount_of_ingredients;
        scanf("%d", &amount_of_ingredients);
        int ingredients_required[amount_of_ingredients+1];
        int ingredients_stock[amount_of_ingredients+1];
        for (int j = 0 ; j < amount_of_ingredients ; j++){
            scanf("%d", &ingredients_required[j]);
        }
        getchar();
        for (int k = 0; k < amount_of_ingredients; k++){
            scanf("%d", &ingredients_stock[k]);
        }
        getchar();
        printf("Case #%d: ", i);
        for (int u = 0; u < amount_of_ingredients; u++){
            if (u == amount_of_ingredients-1){
                printf("%d\n", ingredients_required[u] - ingredients_stock[u]);
                break;}
            printf("%d ", ingredients_required[u] - ingredients_stock[u]);
        }
    }
}