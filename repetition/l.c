#include <stdio.h>

// same question as N
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    int full_bottle, min_ex_bottle;
    for (int i = 1; i <= test_case; i++){
        int total = 0, empty_bottle = 0;
        scanf("%d %d", &full_bottle, &min_ex_bottle);
        empty_bottle += full_bottle;
        total += full_bottle;
        full_bottle = 0;
        while (empty_bottle >= min_ex_bottle){
            empty_bottle -= min_ex_bottle;
            full_bottle++;
            total += full_bottle;
            full_bottle--;
            empty_bottle++;
        }
        printf("Case #%d: %d\n", i, total);
    }
    
}