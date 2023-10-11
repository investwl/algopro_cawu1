#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int length, num;
        scanf("%d", &length);
        printf("Case #%d:\n", i);
        for (int j = 1; j <= length; j++){
            if ((j % 3 == 0 || j % 5 == 0) && j % 15 != 0){
                printf("%d Jojo\n", j);
            }
            else{
                printf("%d Lili\n", j);
            }
        }
    }
}