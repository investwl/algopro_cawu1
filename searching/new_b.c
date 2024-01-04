#include <stdio.h>

int main(){
    FILE* fptr;
    fptr = fopen("testdata.in", "r");
    int amount;
    fscanf(fptr, "%d", &amount);
    getc(fptr);
    int nim[amount];
    char name[amount][50];
    for (int i = 0 ; i < amount ; i++){
        fscanf(fptr, "%d %s", &nim[i], name[i]);
    }
    getc(fptr);
    fclose(fptr);


    int test_case;
    scanf("%d", &test_case); getchar();
    int find_nim[test_case];
    for (int i = 0 ; i < test_case ; i++){
        scanf("%d", &find_nim[i]);
    }
    int idx = 1;
    for (int i = 0 ; i < test_case ; i++){
        for (int j = 0 ; i < amount ; j++){
            if (find_nim[i] == nim[j]){
                printf("Case #%d: %s\n", idx, name[j]);
                break;
            }
            else if (j == amount){
                printf("Case #%d: N/A\n", idx);
            }
        }
        idx++;
    }
}