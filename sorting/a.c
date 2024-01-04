#include <stdio.h>
#include <math.h>
#include <stdlib.h>

long long int partition(long long int* array, long long int left, long long int right){
    long long int pivot = right;
    long long int swap = left;

    for (long long int i = left; i < pivot; i++){
        if (array[i] < array[pivot]){
            long long int temp = array[i];
            array[i] = array[swap];
            array[swap] = temp;

            swap++;
        }
    }

    long long int temp = array[swap];
    array[swap] = array[pivot];
    array[pivot] = temp;

    return swap;
}

void quick_sort(long long int* array, long long int left, long long int right){
    if (left > right){return;}

    long long int mid = partition(array, left, right);

    quick_sort(array, left, mid - 1);
    quick_sort(array, mid + 1, right);
}

// void binary_search(long long int* array, long long int look, long long int left, long long int right, long long int* list_of_max_nums, long long int index_max){
//     if (left > right){return;}

//     long long int mid = left + (right - left) / 2;

//     if (array[mid] == look){}
// }

int main(){
    long long int length;
    scanf("%lld", &length); getchar();
    long long int array[length];
    for (long long int i = 0 ; i < length ; i++){
        scanf("%lld", &array[i]);
    }

    quick_sort(array, 0, length-1);
    
    long long int max = abs(array[0] - array[1]);
    for (long long int i = 1 ; i < length - 1; i++){
        // printf("%d ", abs(array[i] - array[i + 1]));
        if (abs(array[i + 1] - array[i]) > max){
            max = abs(array[i + 1] - array[i]);
        }
    }
    // printf("\n");

    long long int list_of_max_nums[length];
    long long int index_max = 0;
    
    for (long long int i = 0; i < length - 1; i++){
        if (abs(array[i + 1] - array[i]) == max){
            list_of_max_nums[index_max] = array[i];
            index_max++;
            list_of_max_nums[index_max] = array[i + 1];
            index_max++;
        }
    }

    for (long long int i = 0 ; i < index_max; i++){
        printf("%lld", list_of_max_nums[i]);
        if (i != index_max - 1){printf(" ");}
    }
    printf("\n");
}