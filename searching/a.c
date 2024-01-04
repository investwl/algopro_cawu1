#include <stdio.h>
#include <string.h>

int main(){
    FILE* fptr;
    fptr = fopen("testdata.in" , "r");
    int dict;
    fscanf(fptr, "%d", &dict);
    getc(fptr);
    char singkat[dict][101];
    char asli[dict][101];
    for (int i = 0 ; i < dict; i++){
        fscanf(fptr, " %[^#]#%s", singkat[i], asli[i]);
    }

    int test_case;
    fscanf(fptr, " %d", &test_case);
    for (int i = 0 ; i < test_case; i++){
        char kalimat_singkat[101][101] = {};
        char shortened[101];
        fscanf(fptr, " %[^\n]", shortened);
        int sl = 0, sr = 0;
        int length = strlen(shortened);
        for (int j = 0 ; j <= length; j++){
            if (shortened[j] != ' ' && shortened[j] != '\0'){
                kalimat_singkat[sl][sr] = shortened[j];
                sr++;
            }
            else{
                sl++;
                for(int l = 0; l < length; l++){kalimat_singkat[sl][l] = 0;}
                kalimat_singkat[sl][sr] = '\0';
                sr = 0;
            }
        }

        printf("Case #%d:\n", i+1);
        for (int k = 0 ; k < sl ; k++){
            int flag_singkat = 1, flag_panjang = 1;
            for (int j = 0 ; j < dict ; j++){
                if (strcmp(kalimat_singkat[k], singkat[j]) == 0){
                    printf("%s", asli[j]);
                    flag_singkat = 0;
                    if(k != sl - 1){printf(" ");}
                    break;
                }
                else if (strcmp(kalimat_singkat[k], asli[j]) == 0){
                    printf("%s", asli[j]);
                    flag_panjang = 0;
                    if(k != sl - 1){printf(" ");}
                    break;
                }
            }
            if (flag_singkat && flag_panjang){
                printf("%s", kalimat_singkat[k]);
                if(k != sl - 1){printf(" ");}
            }
            
        }
        printf("\n");
    }   
    fclose(fptr);
}