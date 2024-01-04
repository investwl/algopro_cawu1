#include <stdio.h>

int till_one(int user_input);

int main(){
    int test_case;
    scanf("%d", &test_case);
    for (int i = 1 ; i <= test_case ; i++){
        int user_input;
        scanf("%d", &user_input);
        printf("Case #%d: %d\n", i, till_one(user_input));
    }
}

int till_one(int user_input){
    if (user_input == 1){
        return 1;
    }
    else if (user_input % 2 == 1){
        return till_one(user_input - 1) + till_one(user_input + 1);
    }
    else if (user_input % 2 == 0){
        return till_one(user_input / 2);
    }
}