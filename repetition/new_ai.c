#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int panjang, total = 0;
        scanf("%d", &panjang);
        int array_num[panjang];
        for (int j = 0; j < panjang; j++){
            scanf("%d", &array_num[j]);
            total += array_num[j];
        }
        int tumbal = 0; int flag = 0;

        for (int j = 0; j < panjang; j++){
            tumbal += array_num[j];
            total -= array_num[j];
            if (tumbal == total){
                flag = 1;
                break;
            }
        }
        if (flag == 1){printf("Case #%d: Yes\n", i);}
        else if (flag == 0){printf("Case #%d: No\n", i);}
    }
}