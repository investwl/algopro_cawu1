#include <stdio.h>

int main(){
    int daging, sayur, telur;
    scanf("%d %d %d", &daging, &sayur, &telur);
    if (daging > sayur && sayur > telur){
        printf("Daging\nSayur\nTelur\n");
    }
    else if (daging > telur && telur > sayur){
        printf("Daging\nTelur\nSayur\n");
    }
    else if (sayur > daging && daging > telur){
        printf("Sayur\nDaging\nTelur\n");
    }
    else if (sayur > telur && telur > daging){
        printf("Sayur\nTelur\nDaging\n");
    }
    else if (telur > daging && daging > sayur){
        printf("Telur\nDaging\nSayur\n");
    }
    else if (telur > sayur && sayur > daging){
        printf("Telur\nSayur\nDaging\n");
    }
}