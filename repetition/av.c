#include <stdio.h>

int main(){
    int sum,k;
    int count_variance = 0;
    scanf("%d", &sum);
    // int tumbal_sum = sum;
    for (int i = 0; i <= sum; i++){
        for (int j = sum-i; j >=0; j--){
            k=sum-i-j;
                if ((k + j + i) == sum){
                    count_variance++;
                }
            
        }
    }
    printf("%d\n", count_variance);
}