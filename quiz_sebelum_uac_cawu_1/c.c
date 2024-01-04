#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int partition(char kata[][101], int left, int right){
    int pivot = right, swap = left;

    for (int i = left ; i < pivot; i++){
        if (strcmp(kata[i], kata[pivot]) < 0){
            char temp[101];
            strcpy(temp, kata[i]);
            strcpy(kata[i], kata[swap]);
            strcpy(kata[swap], temp);

            swap++;
        }
    }

    char temp[101];
    strcpy(temp, kata[pivot]);
    strcpy(kata[pivot], kata[swap]);
    strcpy(kata[swap], temp);

    return swap;
}

void quick_sort(char kata[][101], int left, int right){
    if (left > right){return;}

    int mid = partition(kata, left, right);

    quick_sort(kata, left, mid -1);
    quick_sort(kata, mid + 1, right);
}

int main(){
    int amount;
    scanf("%d", &amount); getchar();
    //if (amount == 0){printf("\n");}
    char kata[amount][101];
    for (int i = 0 ; i < amount; i++){
        scanf("%s", kata[i]);
    }
    quick_sort(kata, 0, amount - 1);

    for (int i = 0 ; i < amount ; i++){
        printf("%s\n", kata[i]);
    }
}