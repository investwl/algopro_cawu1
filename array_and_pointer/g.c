#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int length;
        scanf("%d", &length);
        int result_test[length];
        int minimum_score[length];
        for (int j = 0 ; j < length; j++){
            scanf("%d", &result_test[j]);
        }
        getchar();
        for (int k = 0; k < length; k++){
            scanf("%d", &minimum_score[k]);
        }
        getchar();
        int fail = 0;
        for (int l = 0 ; l < length; l++){
            if (result_test[l] < minimum_score[l]){
                fail++;
            }
        }
        printf("Case #%d: %d\n", i, fail);
    }
}