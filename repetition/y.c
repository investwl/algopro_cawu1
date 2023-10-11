#include <stdio.h>

int main(){
    int test_case, row, column;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        scanf("%d %d", &row, &column);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= row; j++){
            for (int k = 1; k <= column; k++){
                if (k == 1 || k == column || j == row || j == 1){
                    printf("#");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}