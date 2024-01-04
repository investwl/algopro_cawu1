#include <stdio.h>
#include <string.h>


int main(){
    FILE* fptr;
    fptr = fopen("testdata.in", "r");
    int test_case;
    fscanf(fptr, "%d", &test_case);
    getc(fptr);
    for (int i = 1 ; i <= test_case ; i++){
        int minus;
        fscanf(fptr, "%d", &minus);
        getc(fptr);
        char encrypted[1001];
        fgets(encrypted, 1000 , fptr);
        int length = strlen(encrypted);
        for (int j = 0 ; j < length ; j++){
            if (encrypted[j] == '\0' || encrypted[j] == '\n'){
                encrypted[j] = '\0';
                break;
            }
            if (encrypted[j] == ' '){
                continue;    
            }
            else if (encrypted[j] == '0'){
                encrypted[j] = 'O';
            }
            else if (encrypted[j] == '1'){
                encrypted[j] = 'I';
            }
            else if (encrypted[j] == '3'){
                encrypted[j] = 'E';
            }
            else if (encrypted[j] == '4'){
                encrypted[j] = 'A';
            }
            else if (encrypted[j] == '5'){
                encrypted[j] = 'S';
            }
            else if (encrypted[j] == '6'){
                encrypted[j] = 'G';
            }
            else if (encrypted[j] == '7'){
                encrypted[j] = 'T';
            }
            else if (encrypted[j] == '8'){
                encrypted[j] = 'B';
            }
            if (encrypted[j] - minus < 'A'){
                encrypted[j] = encrypted[j] - minus + 26;
            }
            else{
                encrypted[j] -= minus;
            }
            
        }
        if (encrypted[length] != '\0'){encrypted[length] = '\0';}
        printf("Case #%d: %s\n", i, encrypted);
    }
    fclose(fptr);
}