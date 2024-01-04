#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int area(int size, int total_cube){
    return size * size * total_cube;
}

int perimeter(int size, int* ice_box, int length){
    int total = 0;
    total = total + (size * length * 2);
    //printf("%d ", total);
    for (int a = 0; a < length; a++){
        int side = size * ice_box[a]; // mewakili kiri dan kanan
        if (a == length - 1){
            total = total + side; // kanan
            //printf("%d ", total);
        }
        if (a == 0){
            total = total + side; // kiri
            //printf("%d ", total);
        }
        else if (ice_box[a] - ice_box[a - 1] != 0){
            int diff = abs((ice_box[a] - ice_box[a - 1]));
            total = total + (size * diff); 
            //printf("%d ", total);
        }
        //printf("\n");
    }
    return total;
}

int main(){
    FILE *fptr = fopen("testdata.in", "r");
    int test_case;
    fscanf(fptr, "%d", &test_case);
    for (int i = 1 ; i <= test_case; i++){
        int size = 2, total_cube = 0; // default size
        int length;
        fscanf(fptr, " %d", &length);
        int ice_box[length];
        for (int j = 0 ; j < length ; j++){
            fscanf(fptr, " %d", &ice_box[j]);
            total_cube += ice_box[j];
        }
        int cube_area = area(size, total_cube);
        int cube_peri = perimeter(size, ice_box, length);

        printf("Case #%d: %d %d\n", i, cube_peri, cube_area);
    }

    fclose(fptr);
}