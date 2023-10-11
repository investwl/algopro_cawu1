#include <stdio.h>

int main(){
    int arr_length;
    scanf("%d\n", &arr_length);
    int arr_of_nums[arr_length];
    for (int i = 0; i < arr_length; i++){
        scanf("%d", &arr_of_nums[i]);
    }
    getchar();
    int how_many_changing;
    scanf("%d", &how_many_changing);
    for (int k = 0; k < how_many_changing; k++){
        int mau_rubah_index_yang_ke;
        int mau_dirubah_jadi;
        scanf("%d %d", &mau_rubah_index_yang_ke, &mau_dirubah_jadi);
        mau_rubah_index_yang_ke--;
        arr_of_nums[mau_rubah_index_yang_ke] = mau_dirubah_jadi;
        printf("Case #%d: ", k+1);
        for (int l = 0; l < arr_length; l++){
            printf("%d", arr_of_nums[l]);
            if (l != arr_length-1){printf(" ");}
        }
        printf("\n");
    }
}