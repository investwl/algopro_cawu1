#include <stdio.h>

int main(){
    int length;
    scanf("%d\n", &length);
    long int array_deh[length];
    for (int i = 0; i < length; i++){
        scanf("%ld", &array_deh[i]);
    }
    for (int j = 0; j < length; j++){
        if (j == length-1){ 
            printf("%ld", array_deh[j]);
        }
        else if (array_deh[j+1] <= array_deh[j]){
            printf("%ld ", array_deh[j]);
        }
    }
    printf("\n");
}