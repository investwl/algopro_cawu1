#include <stdio.h>

// convert notation into array x and y
// x = huruf, y = angkanya
void notation_converter(int *coord_kiri, int *coord_kanan, char huruf_kiri, int nomor_kiri, char huruf_kanan, int nomor_kanan){
    int tumbal_kiri = huruf_kiri - 'A';
    coord_kiri[0] = tumbal_kiri;
    coord_kiri[1] = nomor_kiri - 1;
    int tumbal_kanan = huruf_kanan - 'A';
    coord_kanan[0] = tumbal_kanan;
    coord_kanan[1] = nomor_kanan - 1;
}

int move_encounter(int *coord_kiri, int *coord_kanan, int limited_move, int turn, int couple, int board[8][8]){
    if (turn == limited_move){
        return couple;
    }
    if (coord_kiri[0] == coord_kanan[0] && coord_kiri[1] == coord_kanan[1]){
        return 1;
    }
    turn++;
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1 ; i <= test_case ; i++){
        int limited_move;
        scanf("%d", &limited_move); getchar();
        char huruf_kiri, huruf_kanan;
        int nomor_kiri, nomor_kanan;
        scanf("%c%d %c%d", &huruf_kiri, &nomor_kiri, &huruf_kanan, &nomor_kanan);
        int coord_kiri[2], coord_kanan[2]; // yang dipake ini buat liat coordinate
        notation_converter(coord_kiri, coord_kanan, huruf_kiri, nomor_kiri, huruf_kanan, nomor_kanan);
        int chessboard[8][8]; // dipake buat penanda lokasi kuda sama ud pernah lewat
        int couple = move_encounter(coord_kiri, coord_kanan, limited_move, 0, 0, chessboard);
        if (couple){printf("Case #%d: YES\n", i);}
        else{printf("Case #%d: NO\n", i);}
    }
}