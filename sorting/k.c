#include <stdio.h>

int partition(int* list, int left, int right){
    int pivot = right, swap = left;

    for (int k = left; k < pivot; k++){
        if (list[k] < list[pivot]){
            int temp = list[k];
            list[k] = list[swap];
            list[swap] = temp;

            swap++;
        }
    }
    int temp = list[pivot];
    list[pivot] = list[swap];
    list[swap] = temp;
    return swap;
}

void quick_sort(int* list, int left, int right){
    if (left > right){return;}

    int mid = partition(list, left, right);

    quick_sort(list, left, mid - 1);
    quick_sort(list, mid + 1, right);
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 0 ; i < test_case ; i++){
        int sum = 0;
        int numbers[25];
        int result[6];
        for (int j = 0 ; j < 25; j++){
            scanf("%d", &numbers[j]);
            sum += numbers[j];
        }

        quick_sort(numbers, 0, 24);

        // yg pertama nambahin dirinya sendiri berarti bisa / 2
        result[0] = numbers[0] / 2;
        // berlaku kayak yg pertama tapi ini yg versi blkgnya aja
        result[4] = numbers[24] / 2;
        // nomor yg dikasih tau yang di soal itu hasil dari tambah nambah sama angka depannya
        result[1] = numbers[1] - result[0];
        // sama kayak result[1]
        result[3] = numbers[23] - result[4];

        // sum dari total angka selalu puluhan
        // sum nya bisa jadi angka besar, bisa dikurangin sama hasil yang dikasih tau * 10
        
        result[2] = (sum - (result[0] * 10)- (result[1] * 10) - (result[3] * 10) - (result[4] * 10)) / 10;
        printf("Case #%d: %d %d %d %d %d\n", i+1, result[0], result[1], result[2], result[3], result[4]);
    }
}