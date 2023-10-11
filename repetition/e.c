#include <stdio.h>

int main(){
    int test_case, pos_int, position;
    scanf("%d\n", &test_case);
    for (int i = 0; i < test_case; i++){
        scanf("%d %d", &pos_int, &position);
        for (int j = 0; j <= position; j++){
            if (j == position){
                printf("%d\n", pos_int % 2);
            }
            else{
                pos_int /= 2;
            }
        }
    }
}