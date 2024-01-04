#include <stdio.h>
#include <stdlib.h>

int comparer(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int binary_search(int* list_data, int find, int left, int right){
    int output = -1;
    while (left <= right){

        int mid = left + (right - left) / 2;

        if (list_data[mid] == find){
            output = mid;
            right = mid - 1;
        }
        else if (list_data[mid] > find){right = mid - 1;}
        else{left = mid + 1;}
    }
    return output;
}

int main(){
    int data, look;
    scanf("%d %d", &data, &look); getchar();
    int list_data[data], list_look;
    for (int i = 0; i < data; i++){
        scanf("%d", &list_data[i]);
    }
    getchar();
    qsort(list_data, data, sizeof(int), comparer);
    for (int i = 0 ; i < look; i++){
        scanf("%d", &list_look);
        int result = binary_search(list_data, list_look, 0, data - 1);
        if (result == -1){
            printf("%d", result);
        }
        else{
            printf("%d", result + 1);
        }
        printf("\n");
    }
}