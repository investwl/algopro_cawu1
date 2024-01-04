#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fptr = fopen("testdata.in", "r");
    int test_case;
    fscanf(fptr, " %d", &test_case);
    for (int x = 0 ; x < test_case; x++){
        char kalimat[101]={};
        fscanf(fptr, " %[^\n]", kalimat);
        int len = strlen(kalimat);
        int process;
        fscanf(fptr, " %d", &process);
        char alpha_tuker[27] = {};

        for (int i = 0 ; i < process; i++){
            char take, exchange;
            fscanf(fptr, " %c %c", &take, &exchange);
            int flag = 0;
            for (int j = 0; j < i; j++){
                if (take == alpha_tuker[j]){
                    flag = 1;
                    break;
                }
            }

            if (flag){continue;}

            alpha_tuker[i] = take;
            for (int j = 0 ; j < len; j++){
                if (kalimat[j] == take){
                    kalimat[j] = exchange;
                }
            }
        }

        int counter[27] = {0};
        for (int p = 0; p < len; p++){
            int temp = kalimat[p] - 'A';
            counter[temp]++;
        }

        for (int s = 0 ; s < 26; s++){
            if (counter[s] > 0){
                printf("%c %d\n", s + 'A', counter[s]);
            }
        }
    }
    fclose(fptr);
}