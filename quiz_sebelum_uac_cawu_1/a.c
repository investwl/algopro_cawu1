#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search(char no_telp[][256], char look[], int left, int right){
    if (left > right){
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (strcmp(no_telp[mid], look) == 0){
        return mid;
    }
    else if (strcmp(no_telp[mid], look) > 0){
        return binary_search(no_telp, look, left, mid - 1);
    }
    else {
        return binary_search(no_telp, look, mid + 1, right);
    }
}

int main(){
    int kontak;
    scanf("%d", &kontak); getchar();
    char no_telp[kontak][256], nama[kontak][256];
    int index_kontak = 0;
    for (int i = 0 ; i < kontak; i++){
        int flag = 0;
        char temp_no[256], temp_nama[256];
        scanf("%s %[^\n]", temp_no, temp_nama);

        // pengecekan duplicate nomor telpon 
        for (int j = 0 ; j < index_kontak ; j++){
            if (strcmp(temp_no, no_telp[j]) == 0){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            strcpy(no_telp[index_kontak], temp_no);
            strcpy(nama[index_kontak], temp_nama);
            index_kontak++;
        }

    }

    char penelpon[256], penerima[256];

    scanf("%s", penelpon); getchar();
    scanf("%s", penerima); getchar();

    int cari_penelpon = binary_search(no_telp, penelpon, 0, index_kontak - 1);
    int cari_penerima = binary_search(no_telp, penerima, 0, index_kontak - 1);

    if (cari_penelpon == -1 || cari_penerima == -1){
        printf("Impossible\n");
    }
    else if (cari_penelpon == cari_penerima){
        printf("Impossible\n");
    }
    else{
        printf("%s is calling %s\n", nama[cari_penelpon], nama[cari_penerima]);
    }
}