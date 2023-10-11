#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    int games_played, count_l, count_b, count_tie;
    for (int i = 0; i < test_case; i++){
        count_b = 0;
        count_l = 0;
        count_tie = 0;
        scanf("%d", &games_played);
        char winner;
        for (int k = 0; k <= games_played; k++){
            scanf("%c", &winner);
            if (winner == 'L'){
                count_l++;
            }
            else if (winner == 'B'){
                count_b++;
            }
            else{
                count_tie++;
            }
        }
        if (count_b == count_l || count_tie > count_b || count_tie > count_l){printf("None\n");}
        else if (count_l > count_b){printf("Lili\n");}
        else if (count_b > count_l){printf("Bibi\n");}
    }
}