#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1 ; i <= test_case ; i++){
        int ranks;
        scanf("%d", &ranks); getchar();
        char champions[ranks][30];
        int score[ranks]; 
        for (int j = 0; j < ranks ; j++){
            char champ_input[30];
            scanf("%s", champ_input);
            int length_champ = strlen(champ_input);
            // cari dimana #, pake strncmp
            for (int k = 0; k < length_champ ; k++){
                if (champ_input[k] == '#'){
                    strncpy(champions[j], champ_input, k);
                    champions[j][k] = '\0'; // biar strncpy nya bener
                    char tumbal_angka[5];
                    strcpy(tumbal_angka, &champ_input[k+1]);
                    score[j] = atoi(tumbal_angka); // atoi : conv str to int
                    break;
                }
            }
        }
        char our_champ[30]; // yaampun gara2 kurang 1 size :)
        scanf("%s", our_champ); getchar();
        // bubble sort
        for (int f = 0 ; f < ranks - 1; f++){
            for (int g = 1+f; g < ranks ; g++){
                if (score[g] > score[f]){
                    int temp = score[f];
                    score[f] = score[g];
                    score[g] = temp;
                    char tumbalterus[15];
                    strcpy(tumbalterus, champions[f]);
                    strcpy(champions[f], champions[g]);
                    strcpy(champions[g], tumbalterus);
                }
                else if (score[g] == score[f]){
                    if (strcmp(champions[g],champions[f]) < 0){
                        char tumbalterus[15];
                        strcpy(tumbalterus, champions[f]);
                        strcpy(champions[f], champions[g]);
                        strcpy(champions[g], tumbalterus);
                    }
                }
            }
        }
        
        for (int z = 0 ; z < ranks ; z++){
            if (strcmp(our_champ, champions[z]) == 0){
                printf("Case #%d: %d\n", i,z + 1);
                break;
            }
        }
    }
}