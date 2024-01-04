#include <stdio.h>

int binary_search(long long int* arr, long long int limit, int left, int right){
    if (left > right){
        return -2;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] >= limit && (arr[mid - 1] >= limit && mid != 0)){
        return binary_search(arr, limit, left, mid - 1);
    }
    else if (arr[mid] < limit){
        return binary_search(arr, limit, mid + 1, right);
    }
    else{
        return mid;
    }
}


int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    long long int len, limit;
    for (int i = 0 ; i < test_case; i++){
        scanf("%lld %lld", &len, &limit); getchar();
        long long int sum[len];
        for (int j = 0 ; j < len ; j++){
            scanf("%lld", &sum[j]);
            if (j != 0){
                sum[j] += sum[j - 1];
            }
        }
        int maxadd = -1;
        for (int j = len - 1; j >= 1; j--){
            int result = -1;
            if (sum[j] > limit){
                result = binary_search(sum, sum[j] - limit, 0, j - 1);
            }
            if (j - result > maxadd && result != -2){
                maxadd = j - result;
            }
        }
        printf("Case #%d: %d\n", i+1, maxadd);
    }
    
}