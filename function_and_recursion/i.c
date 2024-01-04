#include <stdio.h>

int recur(int count, int user_input);
int ctr = 0;

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    int i;
    for (i = 1; i <= test_case; i++){
        int user_input;
        scanf("%d", &user_input); getchar();
//        if (user_input <= 1){
//            printf("Case #%d: %d\n", i, 0);
//            continue;
//        }
        int count = 0;
        int result = recur(count, user_input);
        printf("Case #%d: %d\n", i, result - 1);
    }
}

int recur(int count, int user_input){
//        count++;
    if (user_input <= 1){
        return 2;
    }
    else{
        return recur(count, user_input - 1) + recur(count, user_input - 2);
    }
}
