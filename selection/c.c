#include <stdio.h>

int main(){
    int test_case;
    scanf("%d", &test_case);
    int go_jo, bi_pay;
    for (int i = 1; i <= test_case; i++){
        scanf("%d %d", &go_jo, &bi_pay);
        if (go_jo > bi_pay){
            printf("Case #%d: Go-Jo\n", i);
        }
        else{
            printf("Case #%d: Bi-Pay\n", i);
        }
    }
}