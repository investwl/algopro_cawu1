#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int array_size;
        scanf("%d", &array_size);
        int box_array[array_size][array_size];
        for (int j = 0; j < array_size; j++){
            for (int k = 0; k < array_size; k++){
                scanf("%d", &box_array[j][k]);
            }
        }
        printf("Case #%d: ", i);
        for (int l = 0; l < array_size; l++){
            int count = 0;
            for (int m = 0; m < array_size; m++){
                count += box_array[m][l];
            }
            printf("%d", count);
            if (l != array_size-1){printf(" ");}
        }
        printf("\n");
    }
}