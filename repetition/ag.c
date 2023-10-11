#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    int cut, res;
    for (int i = 1; i <= test_case; i++){
        int k = 0;
        int the_cake = 0;
        scanf("%d", &cut);
        int result[cut];
        for (k; k < cut; k++){
            result[k] = (the_cake*(the_cake+1))/2 + 1;
            the_cake++;
        }
        printf("Case %d: ", i);
        for (int j = 0; j < cut; j++){
            if (j == cut-1){
                printf("%d", result[j]);
                break;
            }
            printf("%d ", result[j]);
        }
        printf("\n");
    }
}