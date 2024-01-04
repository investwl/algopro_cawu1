#include <stdio.h>

int main(){
    int in_tas, out_tas, flag = 0;
    scanf("%d %d" , &in_tas, &out_tas); getchar();
    int isi_tas[in_tas], ambil_tas[out_tas];
    for (int i = 0 ; i < in_tas ; i++){
        scanf("%d", &isi_tas[i]);
    }
    getchar();
    for (int i = 0 ; i < out_tas; i++){
        scanf("%d", &ambil_tas[i]);
    }
    getchar();
    for (int i = 0 ; i < in_tas ; i++){
        for (int j = 0 ; j < out_tas ; j++){
            if (isi_tas[i] == ambil_tas[j]){
                isi_tas[i] = 0;
            }
        }
    }

    for (int i = 0; i < in_tas ; i++){
        if (isi_tas[i] != 0){
            flag = 1;
            break;
        }
    }

    if (flag == 0){printf("Maximum number is -1\n");}
    else{
        int max;
        for (int i = 0 ; i < in_tas; i++){
            if (i == 0){
                max = isi_tas[i];
            }
            if (max < isi_tas[i]){
                max = isi_tas[i];
            }
        }
        printf("Maximum number is %d\n", max);
        }

    
}