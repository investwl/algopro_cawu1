#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1 ; i <= test_case ; i++){
        long long int money;
        long long int interest_per_year, how_long_deposit;
        scanf("%lld %lld %lld", &money, &interest_per_year, &how_long_deposit);
        // long long int interest;
        printf("Case #%d:\n", i);
        int the_month = 1;
        for (int a = 0 ; a < how_long_deposit ; a++){
            double interest = ((((double)money * ((double)interest_per_year / 100)) / 12) * 0.8);
            money += interest;
            printf("%d %lld\n", the_month, money);
            the_month++;
        }
    }
}