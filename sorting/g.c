#include <stdio.h>
#include <stdlib.h>

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();

    for (int i = 0 ; i < test_case; i++){
        int jml_gerbong, minute;
        scanf("%d %d", &jml_gerbong, &minute); getchar();
        int angka_gerbong[jml_gerbong];
        for (int j = 0 ; j < jml_gerbong; j++){
            scanf("%d", &angka_gerbong[j]);
        }
        int total_minute = 0;
        for (int l = 0; l < jml_gerbong-1; l++){
            for (int k = 0 ; k < jml_gerbong -1 ; k++){
                if (angka_gerbong[k+1] < angka_gerbong[k]){
                    int swap = angka_gerbong[k];
                    angka_gerbong[k] = angka_gerbong[k+1];
                    angka_gerbong[k+1] = swap;
                    total_minute += minute;
                }
            }
        }

        printf("Case #%d: %d\n", i+1, total_minute);
    }
}