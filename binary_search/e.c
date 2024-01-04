#include <stdio.h>

int main(){
    long long int len;
    scanf("%lld", &len); 
    long long int sum[len];
    for (long long int i = 0 ; i < len; i++){
        scanf("%lld", &sum[i]);
    }
    long long int test_case;
    scanf("%lld", &test_case); 
    for (int i = 0 ; i < test_case; i++){
        long long int limit;
        scanf("%lld", &limit);
        int maxadd = -1, left = 0, right = 0;
        long long int tempsum = 0;
        while (right < len){

            tempsum += sum[right];

            while (tempsum > limit && left <= right){
                tempsum -= sum[left];
                left++;
            }

            int currsum = right - left + 1;
            if (tempsum <= limit && currsum > maxadd){maxadd = currsum;}

            right++;

        }
        if (maxadd <= 0){
            printf("Case #%d: -1\n", i+1);
        }
        else{printf("Case #%d: %d\n", i+1, maxadd);}
    }
    
}