#include <stdio.h>

int main(){
    int length;
    scanf("%d\n", &length);
    int index_suka_suka_bibi[length];
    int value_index[length];
    int index_udah_dirubah[length];
    for (int i = 0 ; i < length; i++){
        scanf("%d", &index_suka_suka_bibi[i]);
    }
    getchar();
    for (int k = 0 ; k < length ; k++){
        scanf("%d", &value_index[k]);
    }
    int counter = 0;
    for (int l = 0; l < length; l++){
        for (int j = 0; j < length; j++){
            if (index_suka_suka_bibi[j] == counter){
                index_udah_dirubah[counter] = value_index[j]; 
                counter++;
                break;
            }
        }
    }

    for (int a = 0; a < length; a++){
        printf("%d", index_udah_dirubah[a]);
        if (a != length-1){printf(" ");}
    }
    printf("\n");
}