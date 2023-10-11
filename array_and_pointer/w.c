#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int length;
        scanf("%d", &length);
        getchar();
        unsigned long long int arr_nums[length];
        for (int j = 0; j < length; j++){
            scanf("%llu", &arr_nums[j]);
        }
        getchar();
        int count = 0;
        for (int k = 0; k < length; k++){
        int flag = 1;
            for (int l = 0; l < length; l++){
                for (int z = l+1; z < length; z++){
                    if (arr_nums[k] == (arr_nums[l] + arr_nums[z])){
                        count++;
                        flag = 0;
                        break;
                    }
                }
            if (flag == 0){break;}               
            }
        }
        printf("Case #%d: %d\n", i, count);
    }
}