#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int partition_huruf(char* kata, int left, int right){
    int pivot = right, swap = left;

    for (int i = left; i < pivot ; i++){
        if (kata[i] < kata[pivot]){
            char temp;
            temp = kata[i];
            kata[i] = kata[swap];
            kata[swap] = temp;

            swap++;
        }
    }

    char temp;
    temp = kata[pivot];
    kata[pivot] = kata[swap];
    kata[swap] = temp;

    return swap;
}

void quick_sort_huruf(char* kata, int left, int right){
    if (left > right){return;}

    int mid = partition_huruf(kata, left, right);

    quick_sort_huruf(kata, left, mid - 1);
    quick_sort_huruf(kata, mid + 1, right);
}

// int partition(char* kata[], int left, int right){
//     int pivot = right, swap = left;

//     for (int i = left; i < pivot ; i++){
//         if (strcmp(kata[i],kata[pivot]) < 0){
//             char temp;
//             temp = kata[i];
//             kata[i] = kata[swap];
//             kata[swap] = temp;

//             swap++;
//         }
//     }

//     char temp;
//     temp = kata[pivot];
//     kata[pivot] = kata[swap];
//     kata[swap] = temp;

//     return swap;
// }

// void quick_sort(char* kata[], int left, int right){
//     if (left > right){return;}

//     int mid = partition(kata, left, right);

//     quick_sort(kata, left, mid - 1);
//     quick_sort(kata, mid + 1, right);
// }

int main(){
    int samping, bawah;
    scanf("%d %d", &bawah, &samping); getchar();
    char kata[bawah + 1][samping + 1];
    for (int i = 0; i < bawah; i++){
        scanf("%s", kata[i]);
    }

    // sort per kata

    for (int i = 0 ; i < bawah; i++){
        quick_sort_huruf(kata[i], 0, samping - 1);
    }

    // for (int i = 0 ; i < bawah; i++){
    //     for (int j = 0 ; j < samping - 1; j++){
    //         for (int k = j+1; k < samping; k++){
    //             if (kata[i][k] < kata[i][j]){
    //                 char temp;
    //                 temp = kata[i][k];
    //                 kata[i][k] = kata[i][j];
    //                 kata[i][j] = temp;
    //             }
    //         }
    //     }
    // }

    for (int i = 0 ; i < bawah - 1; i++){
        for (int j = i+1; j < bawah; j++){
            if (strcmp(kata[j], kata[i]) > 0){
                char temp[samping];
                strcpy(temp, kata[i]);
                strcpy(kata[i], kata[j]);
                strcpy(kata[j], temp);
            }
        }
    }


    for (int i = 0 ; i < bawah; i++){
        printf("%s\n", kata[i]);
    }
}