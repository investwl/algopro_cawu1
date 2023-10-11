#include <stdio.h>

int main(){
    int test_case, student;
    scanf("%d\n", &test_case);
    for (int i = 1; i<=test_case; i++){
        scanf("%d", &student);
        int highest = 0, stu_score[student], present=0;
        for (int j = 0; j < student; j++){
            scanf("%d", &stu_score[j]);
            if (highest < stu_score[j]){highest = stu_score[j];}
        }
        for (int k = 0; k < student; k++){
            if (highest == stu_score[k]){present++;}
        }
        printf("Case #%d: %d\n", i, present);
    }
    
}