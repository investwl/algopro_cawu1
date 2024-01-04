#include <stdio.h>

void bubble_sort(double *list_num, int length){
    for (int a = 0; a < length - 1 ; a++){
        for (int b = 1+a; b < length ; b++){
            if (list_num[b] < list_num[a]){
                double temp = list_num[a];
                list_num[a] = list_num[b];
                list_num[b] = temp;
            }
        }
    }
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1; i <= test_case ; i++){
        int length;
        scanf("%d", &length); getchar();
        double list_num[length];
        double tumbal = 0;
        for (int j = 0 ; j < length ; j++){
            scanf("%lf", &list_num[j]);
            tumbal += list_num[j];
        }
        double mean = tumbal / (double)length;
        printf("Case #%d:\n", i);
        printf("Mean : %.02lf\n", mean);
        bubble_sort(list_num, length);
        int median_index;
        double median;
        if (length % 2 == 1){
            median_index = (length / 2);
            median = list_num[median_index];
        }
        else if (length % 2 == 0){
            median_index = (length / 2) - 1;
            median = (list_num[median_index] + list_num[median_index + 1]) / 2; 
        }
        printf("Median : %.02lf\n", median);
    }
}