#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1 ; i <= test_case ; i++){
        int size;
        scanf(" %d", &size);
        int mat_1[size][size];
        int mat_2[size][size];
        int mat_3[size][size];
        int mat_tot[size][size];
        int mat_final[size][size];


        // ini 3 loop scanf ngambil isian matrik doang 
        for (int a = 0; a < size; a++){
            for (int b = 0 ; b < size; b++){
                scanf(" %d", &mat_1[a][b]);
            }
        }
        for (int a = 0; a < size; a++){
            for (int b = 0 ; b < size; b++){
                scanf(" %d", &mat_2[a][b]);
            }
        }
        for (int a = 0; a < size; a++){
            for (int b = 0 ; b < size; b++){
                scanf(" %d", &mat_3[a][b]);
            }
        }
        
        // ini mat_tot[y][z] matriks baru buat nampung hasil perkaliannya
        for (int y = 0; y < size ; y++){
            for (int z = 0 ; z < size ; z++){
                mat_tot[y][z] = 0;
                for (int x = 0; x < size ; x++){
                    mat_tot[y][z] += (mat_1[y][x] * mat_2[x][z]);
                }
            }
        }
        // karena ada 3 matriks, kan matriks 1 lu kali matriks 2
        // nah yg dibawah ini dia hasil kali, dikali matriks ke 3
        // disimpan di matriks baru lg  
        for (int y = 0; y < size ; y++){
            for (int z = 0 ; z < size ; z++){
                mat_final[y][z] = 0;
                for (int x = 0; x < size ; x++){
                    mat_final[y][z] += (mat_tot[y][x] * mat_3[x][z]);
                }
            }
        }
        printf("Case #%d:\n", i);
        // ini print hasil kali semuanya
        for (int c = 0; c < size; c++){
            for (int d = 0 ; d < size; d++){
                printf("%d", mat_final[c][d]);
                if (d != size-1){printf(" ");}
            }
            printf("\n");
        }
    }
}