#include <stdio.h>
// ini hrsnya bener, fixed stlh liat code org lain
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1 ; i <= test_case ; i++){
        int length;
        scanf("%d", &length);
        getchar();
        long int product_codes[length];
        for (int j = 0 ; j < length ; j++){
            scanf("%ld", &product_codes[j]);
        }
        getchar();
        long int count_dupe[length];
        for (int p = 0 ; p < length ; p++){
            count_dupe[p] = 0;
        }
        int indicate = 0;
        for (int l = 0 ; l < length ; l++){
            if (product_codes[l] == product_codes[l+1]){
                indicate++;
                l += 1;
            }
        }
        printf("Case #%d: %d\n", i, indicate);
    }
}