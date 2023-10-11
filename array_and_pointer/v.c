#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    unsigned long long int fibonacci[90];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    int indicator_one = 0;
    int indicator_two = 1;
    for (int j = 2; j < 90;j++){
        fibonacci[j] = fibonacci[indicator_one] + fibonacci[indicator_two];
        indicator_one++;
        indicator_two++;
    }
    for (int i = 1; i <= test_case; i++){
        int user_input;
        scanf("%d", &user_input);
        getchar();
        if (user_input == 1){
            printf("Case #%d: 0\n", i);
            continue;
        }
        else if (user_input == 2){
            printf("Case #%d: 1\n", i);
            continue;
        }
        printf("Case #%d: %llu\n", i, fibonacci[user_input-1]);
    }
}