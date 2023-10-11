#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int length;
        scanf("%d", &length);
        getchar();
        int arr_of_nums[length];
        for (int j = 0 ; j < length ; j++){
            scanf("%d", &arr_of_nums[j]);
        }
        getchar();
        int bibi_pick, lili_pick;
        scanf("%d %d", &bibi_pick, &lili_pick);
        getchar();
        bibi_pick--;
        lili_pick--;
        if (arr_of_nums[lili_pick] > arr_of_nums[bibi_pick]){printf("Case #%d : Lili\n", i);}
        else if (arr_of_nums[bibi_pick] > arr_of_nums[lili_pick]){printf("Case #%d : Bibi\n", i);}
        else if (arr_of_nums[bibi_pick] == arr_of_nums[lili_pick]){printf("Case #%d : Draw\n", i);}
    }
}