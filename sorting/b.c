#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int partition(int* id, char name[][41], int left, int right){
    int pivot = right;
    int swap = left;

    for (int a = left ; a < pivot ; a++){
        if (strcmp(name[a], name[pivot]) < 0){
            int tumbal = id[a];
            id[a] = id[swap];
            id[swap] = tumbal;
            
            char temp[41];
            strcpy(temp, name[a]);
            strcpy(name[a], name[swap]);
            strcpy(name[swap], temp);

            swap++;
        }
    }

    int tumbal = id[pivot];
    id[pivot] = id[swap];
    id[swap] = tumbal;
    
    char temp[41];
    strcpy(temp, name[pivot]);
    strcpy(name[pivot], name[swap]);
    strcpy(name[swap], temp);

    return swap;
}

void quick_sort(int* id, char name[][41], int left, int right){
    if (left > right){return;}

    int mid = partition(id, name, left, right);

    quick_sort(id, name, left, mid - 1);
    quick_sort(id, name, mid + 1, right);
}

int main(){
    FILE *fptr = fopen("testdata.in", "r");
    int amt;
    fscanf(fptr, " %d", &amt);
    int plant_id[amt];
    char plant_name[amt][41];
    for (int i = 0 ; i < amt ; i++){
        fscanf(fptr, " %d#%[^\n]", &plant_id[i], plant_name[i]);
    }

    quick_sort(plant_id, plant_name, 0, amt - 1);

    for (int i = 0 ; i < amt; i++){
        printf("%d %s\n", plant_id[i], plant_name[i]);
    }

    fclose(fptr);
}