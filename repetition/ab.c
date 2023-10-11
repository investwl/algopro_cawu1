#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    int a,b,c,d,e;
    for (int i = 1; i <= test_case; i++){
        int count = 0;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        for (int j = 1; j <= a; j++){
            if (j % b == 0){
                count++;
            }
            else if (j % c == 0){
                count++;
            }
            else if (j % d == 0){
                count++;
            }
            else if (j % e == 0){
                count++;
            }
        }
        printf("Case #%d: %d\n", i, count);
    }
}