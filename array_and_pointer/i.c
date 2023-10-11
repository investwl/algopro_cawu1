#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int length;
        scanf("%d", &length);
        getchar();
        int array_of_num[length];
        for (int k = 0 ; k < length; k++){
            scanf("%d", &array_of_num[k]);
        }
        getchar();
        printf("Case #%d: ",i);
        for (int l = length-1 ; l >= 0; l--){
            printf("%d", array_of_num[l]);
            if (l != 0){printf(" ");}
        }
        printf("\n");
    }
}