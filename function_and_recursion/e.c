#include <stdio.h>

int addition(int length, int list_angka[]){
    if (length == 0){
        return 0;
    }
    else if (length > 0){
        return list_angka[length - 1] + addition(length - 1, list_angka);
    }
}

int main(){
    int test_case;
    scanf("%d", &test_case); 
    int i, j;
    for (i = 1; i <= test_case; i++){
        int length;
        scanf("%d", &length);
        int list_angka[length];
        for (j = 0; j < length; j++){
            scanf("%d", &list_angka[j]);
        }
        int result = addition(length, list_angka);
        printf("Case #%d: %d\n", i, result);
    }
    return 0;
}

