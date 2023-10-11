#include <stdio.h>
#include <math.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int total = 0, v1, v2, total_temp, temp1, temp2;
        scanf("%d %d", &v1, &v2);

        for (int j = 0; v1 != 0 || v2 != 0 ; j++){
            temp1 = v1 % 10;
            temp2 = v2 % 10;
            total_temp = (temp1 + temp2) % 10;
            total += total_temp * pow(10,j);
            v1 /= 10;
            v2 /= 10;
        }
        printf("Case #%d: %d\n", i, total);
    }
}