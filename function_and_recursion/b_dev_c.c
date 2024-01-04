#include <stdio.h>

int recurse(int *branch, int length, int index, int sum){
    if (index*2 > length){
        printf("%d\n", sum);
    }
    int kaki_kiri = sum + branch[index * 2];
    int kaki_kanan = sum + branch[(index * 2) + 1];
    if (index * 2 <= length){
        recurse(branch, length, index * 2, kaki_kiri);
        if ((index * 2) + 1 <= length){
            recurse(branch, length, (index * 2) + 1, kaki_kanan);
        }
    }
    return 0;
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1 ; i <= test_case ; i++){
        int length;
        scanf("%d", &length); getchar();
        int branch[101]; // sengaja mau isi indexnya dari 1 - 100 biar setara
        for (int j = 1 ; j <= length ; j++){
            scanf("%d", &branch[j]);
        }
        printf("Case #%d:\n", i);
        recurse(branch, length, 1, branch[1]);
    }
}