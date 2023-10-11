#include <stdio.h>

int main(){
    long int jumlah_senjata, jumlah_dragon;
    scanf("%ld %ld\n", &jumlah_senjata, &jumlah_dragon);
    long int list_senjata[jumlah_senjata]; long int list_dragon[jumlah_dragon];
    for (long int i = 0; i < jumlah_senjata; i++){
        scanf("%ld", &list_senjata[i]);
    }
    for (long int j = 0; j < jumlah_dragon; j++){
        scanf("%ld", &list_dragon[j]);
    }
    long int flag = 0;
    for (long int k = 0; k < jumlah_senjata; k++){
        flag = 0;
        for (long int l = 0; l < jumlah_dragon; l++){
            if (list_senjata[k] <= list_dragon[l]){
                break;
            }
            flag++;
        }
        if (flag == jumlah_dragon){printf("The dark secret was true\n");
        break;}
    }
    if (flag < jumlah_dragon){printf("Secret debunked\n");}
}