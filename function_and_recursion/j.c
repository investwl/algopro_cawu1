#include <stdio.h>

long long int epic_game(long long int indicate, long long int user_input);

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1 ; i <= test_case ; i++){
        int user_input;
        scanf("%d", &user_input);
        int indicate = 1; 
        long long int result = epic_game(indicate, user_input);
        if (result % 2 == 1){printf("Case #%d: Lili\n", i);}
        else if (result % 2 == 0){printf("Case #%d: Jojo\n", i);}
    }
}

long long int epic_game(long long int indicate,long long int user_input){
    if (user_input == 1){
        return indicate;
    }
    else if (user_input % 2 == 0){
        user_input = user_input / 2;
        return epic_game(indicate + 1, user_input);
    }
    else if (user_input % 2 == 1){
        user_input = user_input * 3;
        return epic_game(indicate + 1, user_input + 1); 
    }
}