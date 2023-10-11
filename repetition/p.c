#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int finish;
        scanf("%d", &finish);
        int counter = 0, position = 0;
        while (position < finish){
            counter++;
            position += counter;
        }
        printf("Case #%d: %d\n", i, counter);
    }
}