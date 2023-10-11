#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        unsigned long long int jumlah_menu, money_left, total_price=0, menu_price;
        scanf("%llu %llu", &jumlah_menu, &money_left);
        for (int j = 1; j <= jumlah_menu; j++){
            scanf("%llu", &menu_price);
            total_price += menu_price;
        }
        if (total_price <= money_left){
            printf("Case #%d: No worries\n", i);
        }
        else{
            printf("Case #%d: Wash dishes\n", i);
        }
    }
}