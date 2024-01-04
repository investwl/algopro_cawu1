#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int partition(char* true_kalimat, int left, int right){
    int pivot = right, swap = left;

    for (int i = left; i < pivot; i++){
        if (true_kalimat[i] < true_kalimat[pivot]){
            char tombal;
            tombal = true_kalimat[i];
            true_kalimat[i] = true_kalimat[swap];
            true_kalimat[swap] = tombal;

            swap++;
        }
    }

    char tombal;
    tombal = true_kalimat[pivot];
    true_kalimat[pivot] = true_kalimat[swap];
    true_kalimat[swap] = tombal;

    return swap;    
}

void quick_sort(char* true_kalimat, int left, int right){
    if (left > right){return;}

    int mid = partition(true_kalimat, left, right);

    quick_sort(true_kalimat, left, mid - 1);
    quick_sort(true_kalimat, mid + 1, right);
}

// pengecekan apakah huruf sudah pernah konversi
// print all word yg berubah, hasil akhirnya

int main(){
    FILE *fptr = fopen("testdata.in", "r");
    int test_case;
    fscanf(fptr, " %d", &test_case);
    for (int x = 0 ; x < test_case; x++){
        char kalimat[101];
        fscanf(fptr, " %[^\n]", kalimat);
        int process;
        fscanf(fptr, " %d", &process);
        char tumbal[101]={};
        char dicari[101]={};
        char dirubah[101]={};
        for (int i = 0 ; i < process ; i++){
            fscanf(fptr, " %[^\n]", tumbal);
            dicari[i] = tumbal[0];
            dirubah[i] = tumbal[2];
        }

        char berubah_jadi[27]={};
        int huruf_yang_udah_berubah[27];
        for (int i = 0 ; i < 26; i++){
            huruf_yang_udah_berubah[i] = 1;
        }
        int index_berubah = 0;

        for (int i = 0 ; i < strlen(kalimat); i++){
            int flag = 0, mark = 0;
            for (int j = 0 ; j < process; j++){
                if (i != 0){
                    if (huruf_yang_udah_berubah[kalimat[i] - 'A'] == 0){
                        break;
                    }
                }

                if (kalimat[i] == dicari[j]){
                    if (huruf_yang_udah_berubah[kalimat[i] - 'A'] == 1){
                        huruf_yang_udah_berubah[kalimat[i] - 'A'] = 0;
                        berubah_jadi[index_berubah] = dirubah[j];
                        for (int d = 0; d < strlen(kalimat); d++){
                            if (kalimat[d] == dicari[j]){
                                kalimat[d] = dirubah[j];
                                flag = 1;
                            }
                        }
                    }
                }
            }
            if (flag){index_berubah++;}
            //printf("%s\n", kalimat);
            // for (int h = 0 ; h < 26; h++){printf("%d ", huruf_yang_udah_berubah[h]);}
            // printf("\n");
        }

        // dibawah ini pengecekan udh bener, cuma konversinya aja kalo misal I O lalu O I yg hrs di fix

        quick_sort(berubah_jadi, 0, index_berubah - 1);
        //printf("%s %s\n", kalimat, berubah_jadi);

        for (int l = 0 ; l < index_berubah; l++){
            char display;
            int amt = 0;
            for (int m = 0 ; m < strlen(kalimat); m++){
                if (kalimat[m] == berubah_jadi[l]){
                    display = kalimat[m];
                    amt++;
                }
            }
            printf("%c %d\n", display, amt);
        }
    }
    fclose(fptr);
}