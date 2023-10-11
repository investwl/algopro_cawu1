#include <stdio.h>

int main(){
    int size;
    scanf("%d\n", &size);
    int matrix[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int flag = 1;
    int tumbal_check[size];
    for (int k = 0; k < size; k++){
        for (int l = 0; l < size; l++){
            tumbal_check[k] = matrix[k][l];
        }
    }

    for (int k = 0; k < size; k++){
        for (int l = k+1; l < size; l++){
            if (tumbal_check[k] == tumbal_check[l]){
                flag = 0;
                break;
            }
        }
    }

    tumbal_check[size];
    for (int k = 0; k < size; k++){
        for (int l = 0; l < size; l++){
            tumbal_check[l] = matrix[l][k];
        }
    }
    
    for (int k = 0; k < size ; k++){
        for (int l = k+1 ; l < size ; l++){
            if (tumbal_check[k] == tumbal_check[k+1]){
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1){printf("Yay\n");}
    else{printf("Nay\n");}
}