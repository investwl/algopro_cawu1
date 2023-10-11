#include <stdio.h>

int main(){
    unsigned long long int balloons, person_strength, balloon_resistance, count = 0;
    scanf("%llu %llu", &balloons, &person_strength);
    for (int i = 0; i < balloons; i++){
        scanf("%llu", &balloon_resistance);
        if (balloon_resistance < person_strength){
            count++;
        }
    }
    printf("%llu\n", count);
}