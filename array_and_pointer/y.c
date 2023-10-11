#include <stdio.h>
#include <string.h>
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int how_many_reverse;
        char the_numbers[1001];
        scanf("%d %s", &how_many_reverse, &the_numbers);
        getchar();

        for (int k = 0 ; k < how_many_reverse; k++){
            int index, change_to_index;
            char temp;
            int n = 0;
            scanf("%d %d", &index, &change_to_index);
            index--;
            change_to_index--;
            while (index + n < change_to_index - n){
                temp = the_numbers[index + n];
                the_numbers[index + n] = the_numbers[change_to_index - n];
                the_numbers[change_to_index - n] = temp;
                n++;
            }
        }
        printf("Case #%d: %s\n", i, the_numbers);
    }
}