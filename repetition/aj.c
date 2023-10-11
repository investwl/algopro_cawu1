#include <stdio.h>

int main(){
    int pinjol_berapa, total_money = 0, berapa_duit;
    scanf("%d\n", &pinjol_berapa);
    for (int i = 0; i < pinjol_berapa; i++){
        scanf("%d", &berapa_duit);
        total_money += berapa_duit;
    }
    printf("%d\n", total_money);
}