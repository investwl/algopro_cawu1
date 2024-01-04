#include <stdio.h>

int recursion(int calc_number, int *count);

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case ; i++){
        int calc_number;
        int count = 0;
        scanf("%d", &calc_number);
        int result = recursion(calc_number, &count);
        printf("Case #%d: %d %d\n", i, result, count);
        count = 0;
    }
}

int recursion(int calc_number, int *count){
    if (calc_number % 3 == 0 && calc_number != 0){
        *count += 1;
    }
    if (calc_number == 0){
        return 1;
    }
    else if (calc_number == 1){
        return 2;
    }
    else if (calc_number % 5 == 0){
        return calc_number * 2;
    }
    else{
        return recursion(calc_number - 1, count) + calc_number + recursion(calc_number - 2, count) + (calc_number - 2);
    }
}