#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1 ; i <= test_case; i++){
        char str_input[1001];
        scanf("%s", str_input);
        int str_len = strlen(str_input);
        char nampung[1001];
        for (int v = 0; v < str_len; v++){
            nampung[v] = str_input[v];
            nampung[v] -= 65;
        }
        int jarak[1001];
        printf("Case #%d:\n", i);
        for (int j = 0 ; j < str_len; j++){
            if (nampung[j] < 4){
                printf("A");
            }
            else if (nampung[j] < 8){
                printf("E");
            }
            else if (nampung[j] < 14){
                printf("I");
            }
            else if (nampung[j] < 20){
                printf("O");
            }
            else{
                printf("U");
            }
        }
        printf("\n");
        for (int a = 0; a < str_len; a++){
            if (nampung[a] < 4){
                printf("%d", nampung[a]); 
            }
            else if (nampung[a] < 8){
                printf("%d", nampung[a] - 4); 
            }
            else if (nampung[a] < 14){
                printf("%d", nampung[a] - 8); 
            }
            else if (nampung[a] < 20){
                printf("%d", nampung[a] - 14); 
            }
            else{
                printf("%d", nampung[a] - 20);
            }
        }
        printf("\n");
    }
}