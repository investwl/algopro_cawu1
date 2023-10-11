#include <stdio.h>
// idk why i opened this file and it wasnt saved before i saved
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int test_id = 1; test_case <= test_case; test_id++){
        int jojo_friend, room_amount, how_many_friends_operate;
        scanf("%d %d %d", &jojo_friend, &room_amount, &how_many_friends_operate);
        getchar();
        int friend_input[jojo_friend][room_amount];
        for (int i = 0 ; i < jojo_friend; i++){
            for (int j = 0 ; j < room_amount ; j++){
                scanf("%d", &friend_input[i][j]);
            }
        }
        getchar();
        int list_of_which_friend_goes[how_many_friends_operate];
        int what_will_happen[jojo_friend][room_amount];
        for (int k = 0; k < how_many_friends_operate; k++){
            scanf("%d", &list_of_which_friend_goes[k]);
            // what_will_ha
        }
        getchar();

        // diatas ini ngambil inputan doang
        // dibawah ini baru bikin room yg kondisinya mati semua lampuny
        int the_room[jojo_friend][room_amount];
        for (int room_row = 0; room_row < jojo_friend; room_row++){
            for (int room_col = 0; room_col < room_amount; room_col++){
                the_room[room_row][room_col] = 0;
            }
        }

        // mau bikin list isi dari siapa aja yg pergi, dan kondisi dia apa
        // int counter = 0;
        
        // for (int f = 0; f < how_many_friends_operate; f++){
        //     for (int g = 0; g < jojo_friend; g++){
        //         for (int h = 0; h < room_amount; h++){
        //             what_will_happen[g][h] = friend_input[g][h][list_of_which_friend_goes[counter]];
        //             printf("%d\n", what_will_happen[g][h]);
        //             counter++;
        //         }
        //     }
        // }
    }
}