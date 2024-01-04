#include <stdio.h>
#include <string.h>

int main(){
    unsigned long long int pelajaran;
    scanf("%llu", &pelajaran); getchar();
    char nama_mapel[pelajaran][10];
    unsigned long long int deadline[pelajaran];
    for (int i = 0 ; i < pelajaran ; i++){
        scanf("%s %llu", nama_mapel[i], &deadline[i]);
    }
    for (int j = 0 ; j < pelajaran - 1; j++){
        for (int k = j+1; k < pelajaran; k++){
            if (deadline[k] < deadline[j]){
                unsigned long long int temp = deadline[j];
                deadline[j] = deadline[k];
                deadline[k] = temp;
                char temp2[10];
                strcpy(temp2,nama_mapel[j]);
                strcpy(nama_mapel[j], nama_mapel[k]);
                strcpy(nama_mapel[k], temp2);
            }
        }
    }

    for (int i = 0 ; i < pelajaran ; i++){
        if (deadline[i] == deadline[i + 1]){
            if (strcmp(nama_mapel[i], nama_mapel[i + 1]) > 0){
                char tempor[10];
                strcpy(tempor,nama_mapel[i]);
                strcpy(nama_mapel[i], nama_mapel[i + 1]);
                strcpy(nama_mapel[i + 1], tempor);
            }
        }
    }


    for (int i = 0 ; i < pelajaran ; i++){
        printf("%s\n", nama_mapel[i]);
    }
}

// if (strcmp(nama_mapel[j], nama_mapel[tumbal]) > 0  && deadline[j] == temp){

// selection sort, no recursion