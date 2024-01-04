#include <stdio.h>

void bubble_sort(int* list_of_mmr, int length){
    for (int a = 0 ; a < length - 1 ; a ++){
        for (int b = a+1; b < length ; b++){
            if (list_of_mmr[b] < list_of_mmr[a]){
                int temp = list_of_mmr[a];
                list_of_mmr[a] = list_of_mmr[b];
                list_of_mmr[b] = temp;
            }
        }
    }
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1 ; i <= test_case ; i++){
        int length;
        scanf("%d", &length); getchar();
        int list_of_mmr[length];
        for (int j = 0 ; j < length ; j++){
            scanf("%d", &list_of_mmr[j]); 
        }
        getchar();
        bubble_sort(list_of_mmr, length);
        int my_mmr; // yang dicari lbh tinggi / lbh kecil
        scanf("%d", &my_mmr);
        int match_mmr; 
        int flag = 1;
        // int simpen_index_my_mmr = 0; // simpen index 
        for (int j = 0 ; j < length ; j++){
            if (my_mmr == list_of_mmr[j]){
                // simpen_index_my_mmr = j;
                if (j == length - 1){
                    match_mmr = list_of_mmr[j - 1];
                }
                else{
                    match_mmr = list_of_mmr[j + 1];
                }
                if (my_mmr > match_mmr){
                    printf("CASE #%d: %d %d\n", i, match_mmr, my_mmr);}
                else if (my_mmr < match_mmr){printf("CASE #%d: %d %d\n", i, my_mmr, match_mmr);}
                flag = 0;
                break;
            }
        }
        if (flag){
            printf("CASE #%d: %d %d\n", i, -1, -1);
        }
    }
}