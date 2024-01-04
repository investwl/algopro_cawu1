#include <stdio.h>

int partition(int* array, int left, int right){
    int pivot = right;
    int swap = left;

    for (int i = left ; i < pivot ; i++){
        if (array[i] < array[pivot]){
            int tumbal = array[i];
            array[i] = array[swap];
            array[swap] = tumbal;

            swap++;
        }
    }

    int tumbal = array[pivot];
    array[pivot] = array[swap];
    array[swap] = tumbal;

    return swap;
}

void quick_sort(int* array, int left, int right){
    if (left > right){return;}

    int mid = partition(array, left, right);

    quick_sort(array, left, mid - 1);
    quick_sort(array, mid + 1, right);
}

int main(){
    int array[] = {2,4,6,7,9,10,1,3,5,8};

    int length = 10;

    quick_sort(array, 0, length);

    for (int i = 0 ; i < length ; i++){printf("%d ", array[i]);}
}