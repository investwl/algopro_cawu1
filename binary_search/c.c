#include <stdio.h>

long long int binary_search(long long int* arr_soal, long long int find, long long int left, long long int right){
    if (left > right){return -1;}

    long long int mid = left + (right - left) / 2;

    if (arr_soal[mid] == find){return mid + 1;}

    else if (arr_soal[mid] > find && arr_soal[mid + 1] < find){return mid;}
    // kalo ada error coba <= dan >= ilangin = nya
    else if (arr_soal[mid] < find && (arr_soal[mid + 1] > find || left == right)){return mid + 1;}

    else if (arr_soal[mid] > find){return binary_search(arr_soal, find, left, mid - 1);}

    else if (arr_soal[mid] < find){return binary_search(arr_soal, find, mid + 1, right);}
}

int main(){
    int panjang_soal;
    scanf("%d", &panjang_soal); getchar();
    long long int arr_soal[panjang_soal];
    long long int temp;
    for (int i = 0 ; i < panjang_soal ; i++){
        // isi dari list ini adalah kalo angka udh ditambahin jd simpen angka total
        // alasannya supaya gak usah count sum terus apalagi kalo 10^5 ntar jebol
        scanf("%lld", &temp);
        if (i == 0){
            arr_soal[i] = temp;
        }
        else{
            arr_soal[i] = arr_soal[i - 1] + temp;
        }
    }
    getchar();
    //quick_sort(arr_soal, 0, panjang_soal - 1);
    long long int test_case;
    scanf("%lld", &test_case); getchar();
    for (long long int i = 0 ; i < test_case ; i++){
        long long int angkanya;
        scanf("%lld", &angkanya); getchar();
        //if (angkanya < 0 || angkanya > 1000000000000001){printf("Case #%lld: %lld\n", i+1, -1);}
        printf("Case #%lld: %lld\n", i+1, binary_search(arr_soal, angkanya, 0, panjang_soal - 1));
    }
}