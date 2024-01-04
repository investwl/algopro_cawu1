#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int partition(long int* height_ppl, int left, int right){
    int pivot = right, swap = left;

    for (int i = left; i < pivot; i++){
        if (height_ppl[i] < height_ppl[pivot]){
            long int tempor = height_ppl[i];
            height_ppl[i] = height_ppl[swap];
            height_ppl[swap] = tempor;

            swap++;
        }
    }
    long int tempor = height_ppl[pivot];
    height_ppl[pivot] = height_ppl[swap];
    height_ppl[swap] = tempor;

    return swap;
}

void quick_sort(long int* height_ppl, int left, int right){
    if (left > right){return;}

    int mid = partition(height_ppl, left, right);

    quick_sort(height_ppl, left, mid - 1);
    quick_sort(height_ppl, mid + 1, right);

}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int a = 1 ; a <= test_case ; a++){
        int people;
        scanf("%d", &people); getchar();
        long int height_ppl[people];
        for (int i = 0 ; i < people; i++){
            scanf("%ld", &height_ppl[i]);
        }

        quick_sort(height_ppl, 0, people - 1);

        long int bagi_dua = people / 2;

        long int jarak1 = 0, jarak2 = 0;

        for (int i = 0 ; i < bagi_dua - 1; i++){
            long int diff = height_ppl[i + 1] - height_ppl[i];
            if (diff > jarak1){jarak1 = diff;}
        }

        for (int i = bagi_dua ; i < people - 1; i++){
            long int diff = height_ppl[i + 1] - height_ppl[i];
            if (diff > jarak2){jarak2 = diff;}
        }

        if (jarak1 > jarak2){
            printf("Case #%d: %ld\n", a, jarak1);
        }
        else {
            printf("Case #%d: %ld\n", a, jarak2);
        }

        // for (int i = 0 ; i < bagi_dua; i++){
        //     printf("%d ", barisan[0][i]);
        // }
        // printf("\n");

        // for (int i = bagi_dua; i < people; i++){
        //     printf("%d ", barisan[1][i]);
        // }
    }


}