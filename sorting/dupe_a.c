#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int partition(long long int* array, int left, int right){
    int pivot = right;
    int swap = left;

    for (int i = left; i < pivot; i++){
        if (array[i] < array[pivot]){
            int temp = array[i];
            array[i] = array[swap];
            array[swap] = temp;

            swap++;
        }
    }

    int temp = array[swap];
    array[swap] = array[pivot];
    array[pivot] = temp;

    return swap;
}

void quick_sort(long long int* array, int left, int right){
    if (left > right){return;}

    int mid = partition(array, left, right);

    quick_sort(array, left, mid - 1);
    quick_sort(array, mid + 1, right);
}


int main(){
    int length;
    scanf("%d", &length); getchar();
    long long int array[length];
    for (int i = 0 ; i < length ; i++){
        scanf("%lld", &array[i]);
    }

    quick_sort(array, 0, length);
  //  for (int i = 0  ; i < length ; i++){printf("%d ",array[i]);}
    //printf("\n");
    
    long long int max = abs(array[0] - array[1]);
    //printf("%lld ", max);
    for (int i = 1 ; i < length - 1; i++){
        if (abs(array[i] - array[i + 1]) > max){
            max = abs(array[i] - array[i + 1]);
        }
        //printf("%lld ", abs(array[i] - array[i + 1]));
    }

    // long long int list_of_max_nums[length];
    // int index_max = 0;
    int flag = 1;
    for (int i = 0; i < length - 1; i++){
        if (abs(array[i + 1] - array[i + 1]) == max){
            if (flag){
                printf("%lld %lld", array[i], array[i + 1]);
                // printf("%d", array[i + 1]);
                flag = 0;
            }
            else{
                printf(" %d %d", array[i], array[i + 1]);
                // printf("%d", array[i + 1]);
            }
            // list_of_max_nums[index_max] = array[i];
            // index_max++;
            // list_of_max_nums[index_max] = array[i + 1];
            // printf("| %d %d | ", array[i], array[i + 1]);
            // index_max++;
        }
    }

    // for (int i = 0 ; i < index_max; i++){
    //     printf("%lld", list_of_max_nums[i]);
    //     if (i != index_max - 1){printf(" ");}
    // }
    printf("\n");
}