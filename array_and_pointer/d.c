#include <stdio.h>

int main(){
    int length, width;
    scanf("%d %d\n", &length, &width);
    int garden[length][width];
    for (int i = 0; i < length; i++){
        for (int j = 0 ; j < width; j++){
            scanf("%d", &garden[i][j]);
        }
    }
    getchar();
    int amount_change;
    scanf("%d", &amount_change);
    getchar();
    int change_length, change_width, change_to;
    for (int k = 0; k < amount_change; k++){
        scanf("%d %d %d", &change_length, &change_width, &change_to);
        garden[change_length-1][change_width-1] = change_to;
    }

    for (int l = 0; l < length; l++){
        for (int p = 0; p < width; p++){
            if (p == width-1){
                printf("%d", garden[l][p]);
                break;
                }
            printf("%d ", garden[l][p]);
        }
        printf("\n");
    }
}