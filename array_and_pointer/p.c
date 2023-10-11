#include <stdio.h>

int main(){
    int size;
    scanf("%d\n", &size);
    int room_people[size][size];
    int arr_count[size];
    int incomplete_team = 0;

    for (int a = 0; a <= size; a++){
        arr_count[a] = 0;
    }

    for (int i = 0; i < size; i++){
        for (int j = 0 ; j < size; j++){
            scanf("%d", &room_people[i][j]);
            arr_count[room_people[i][j]]++;
        }
    }

    for (int b = 0 ; b <= size ; b++){
        if (b == 0){continue;}
        if (arr_count[b] < size){incomplete_team++;}
    }
    printf("%d\n", incomplete_team);
}