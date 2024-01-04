#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    FILE* fptr;
    fptr = fopen("testdata.in", "r");
    int length;
    fscanf(fptr, "%d", &length); // scanf panjang nomors 
    char name[length][31];
    char str_nim[length][31];
    for (int i = 0 ; i < length; i++){
        fscanf(fptr, " %s %s", str_nim[i], name[i]);
    }
    for (int i = 0; i < length - 1; i++){
        for (int j = i+1; j < length ; j++){
            if (strcmp(str_nim[j], str_nim[i]) < 0){
                char tumbal[31];
                strcpy(tumbal, str_nim[i]);
                strcpy(str_nim[i], str_nim[j]);
                strcpy(str_nim[j], tumbal);
                char tumbal2[31];
                strcpy(tumbal2, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tumbal2);
            }
        }
    }
    for (int i = 0 ; i < length ; i++){
        printf("%s %s\n", str_nim[i], name[i]);
    }
    fclose(fptr);
}