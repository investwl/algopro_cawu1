#include <stdio.h>


int main(){
    int max_happy_guest = 0;
    unsigned long long int customer_amount;
    scanf("%llu\n", &customer_amount);
    unsigned long long int requested_rooms[5001] = {}; //cari cara biar idx bisa panjang (malloc)
    for (int j = 0 ; j < customer_amount; j++){
        scanf("%llu", &requested_rooms[j]);
    }
    for (int k = 0 ; k < customer_amount; k++){
        if (requested_rooms[k] == -1){continue;}
        else if (requested_rooms[k] != -1){
            max_happy_guest++;
            for (int l = k+1 ; l < customer_amount; l++){
                if (requested_rooms[k] == requested_rooms[l]){
                    requested_rooms[l] = -1;
                }
            }
        }
    }
    printf("%d\n", max_happy_guest);
}