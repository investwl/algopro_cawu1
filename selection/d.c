#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    unsigned long long int male, female;
    for (int i = 1; i <= test_case; i++){
        scanf("%lld %lld", &male, &female);
        if (female % 2 == 1 && male % 2 == 1){
            printf("Case #%d: Need more frogs\n", i);
        }
        else{
            printf("Case #%d: Party time!\n", i);
        }
    }
}