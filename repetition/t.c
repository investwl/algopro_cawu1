#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int test_case, how_many = 0;
    scanf("%d\n", &test_case);
    // for (int i = 0; i < test_case; i++){
    while (test_case){
        int receive, friend_answer, bibi_answer;
        scanf("%d %d %d", &receive, &friend_answer, &bibi_answer);
        if (friend_answer > bibi_answer){
            how_many++;
        }
        test_case--;
    }
    printf("%d\n", how_many);
}