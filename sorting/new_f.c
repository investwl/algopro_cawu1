#include <stdio.h>
#include <string.h>

int main(){
    int tugas;
    scanf("%d", &tugas); getchar();
    char mapel[tugas][11];
    unsigned int deadline[tugas];
    for (int i = 0 ; i < tugas ; i++){
        scanf("%s %u", mapel[i], &deadline[i]);
    }
    // bubble sort
    for (int i = 0 ; i < tugas - 1; i++){
        for (int j = 1+i ; j < tugas ; j++){
            if (deadline[j] < deadline[i]){
                unsigned int temp = deadline[i];
                deadline[i] = deadline[j];
                deadline[j] = temp;
                char tumbal[11];
                strcpy(tumbal, mapel[i]);
                strcpy(mapel[i], mapel[j]);
                strcpy(mapel[j], tumbal);
            }
            else if (deadline[j] == deadline[i]){
                if (strcmp(mapel[j], mapel[i]) < 0){
                    char tumbal[11];
                    strcpy(tumbal, mapel[i]);
                    strcpy(mapel[i], mapel[j]);
                    strcpy(mapel[j], tumbal);
                }
            }
        }
    }
    for (int i = 0 ; i < tugas ; i++){
        printf("%s\n", mapel[i]);
    }
}