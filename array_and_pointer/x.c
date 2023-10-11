#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        unsigned long long int kebawah, kesamping;
        scanf("%llu %llu", &kebawah, &kesamping);
        unsigned long long int arr_of_chocolate[kebawah][kesamping];
        unsigned long long int max_beg = 0;
        for (int j = 0; j < kebawah; j++){
            unsigned long long int max_from_kid = 0;
            for (int k = 0; k < kesamping; k++){
                scanf("%llu", &arr_of_chocolate[j][k]);
                if (arr_of_chocolate[j][k] > max_from_kid){
                    max_from_kid = arr_of_chocolate[j][k];
                }
            }
            max_beg += max_from_kid;
        }
        printf("Case #%d: %llu\n", i, max_beg);
    }
}