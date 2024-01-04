#include <stdio.h>

void bubble_sort(unsigned long long int* boss_pwr, int mission){
    for (int a = 0 ; a < mission - 1; a++){
        for (int b = 1+a; b < mission ; b++){
            if (boss_pwr[b] < boss_pwr[a]){
                unsigned long long int temp = boss_pwr[a];
                boss_pwr[a] = boss_pwr[b];
                boss_pwr[b] = temp;
            }
        }
    }
}

int main(){
    int mission;
    scanf("%d", &mission); getchar();
    unsigned long long int boss_pwr[mission];
    for (int i = 0 ; i < mission ; i++){
        scanf("%llu", &boss_pwr[i]);
    }
    getchar();
    bubble_sort(boss_pwr, mission);
    unsigned long long int jojo_pwr;
    scanf("%llu", &jojo_pwr);
    int complete = 0;
    for (int i = 0 ; i < mission ; i++){
        if (jojo_pwr >= boss_pwr[i]){
            jojo_pwr -= boss_pwr[i];
            complete++;
        }
    }
    printf("%d\n", complete);
}