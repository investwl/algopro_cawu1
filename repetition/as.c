#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int number_of_quiz;
        scanf("%d", &number_of_quiz);
        getchar();
        char bibi_answer[number_of_quiz+1];
        char lec_answer[number_of_quiz+1];
        int count_correct = 0;
        for (int j = 0; j < number_of_quiz; j++){
            scanf("%c", &bibi_answer[j]);
        }
        getchar();
        for (int k = 0; k < number_of_quiz; k++){
            scanf("%c", &lec_answer[k]);
        }
        getchar();
        for (int l = 0; l < number_of_quiz; l++){
            // printf("bibi = %c --- lec_answer = %c\n", bibi_answer[l], lec_answer[l]);
            if (bibi_answer[l] == lec_answer[l]){count_correct++;}
        }
        float bibi_score = (float)count_correct / (float)number_of_quiz * 100;
        int bibi_real_score = (int)bibi_score;
        printf("Case #%d: %d\n", i, bibi_real_score);
    }
}