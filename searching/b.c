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
    int test_case;
    fscanf(fptr, "%d", &test_case);
    getc(fptr);
    int find_nim[test_case];
    for (int i = 0 ; i < test_case ; i++){
        fscanf(fptr, "%d", &find_nim[i]);
    }
    getc(fptr);
    int idx = 1, flag = 1;
    for (int i = 0 ; i < test_case ; i++){
        for (int j = 0 ; j < amount ; j++){
            if (find_nim[i] == nim[j]){
                printf("Case #%d: %s\n", idx, name[j]);
                flag = 0;
                break;
            }
        }
        if (flag == 1){printf("Case #%d: N/A\n", idx);}
        idx++;
        flag = 1;
    }
    fclose(fptr);
}