#include <stdio.h>
#include <stdlib.h>

int comparer(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

void binary_search(int* tinggi_siswa, int look, int left, int right){
    if (left > right){
        printf("-1\n");
        return;
    }

    int mid = left + (right - left) / 2;

    if (tinggi_siswa[mid] == look){
        printf("%d\n", mid + 1);
    }
    else if (tinggi_siswa[mid] > look){
        binary_search(tinggi_siswa, look, left, mid - 1);
    }
    else{
        binary_search(tinggi_siswa, look, mid + 1, right);
    }

}

int main(){
    int length;
    scanf("%d", &length);
    getchar();
    int tinggi_siswa[length];
    //tinggi_siswa = (int*)malloc(length * sizeof(int));
    for (int i = 0; i < length; i++){
        scanf("%d", &tinggi_siswa[i]);
    }
    getchar();

    int left = 0 , right = length - 1;
    qsort(tinggi_siswa, length, sizeof(tinggi_siswa[0]), comparer);
    
    int test_case;
    scanf("%d", &test_case);
    getchar();
    int look_for_height[test_case];
    for (int i = 0 ; i < test_case ; i++){
        scanf("%d", &look_for_height[i]);
        binary_search(tinggi_siswa, look_for_height[i], 0, length - 1);
    }


    //free(tinggi_siswa);
}