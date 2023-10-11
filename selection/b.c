#include <stdio.h>

int main(){
    int test_value;
    scanf("%d", &test_value);
    int min_noodle, have_noodle, buy_noodle;
    for (int i = 1; i <= test_value; i++){
        scanf("%d %d %d", &min_noodle, &have_noodle, &buy_noodle);
        if (have_noodle + buy_noodle >= min_noodle){
            printf("Case #%d: yes\n", i);
        }
        else{
            printf("Case #%d: no\n", i);
        }
    }
}