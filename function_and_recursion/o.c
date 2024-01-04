#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int x = -1, y = -1;
int star = 0;

char pacmap[101][101];

// void right_go(int p_x, int p_y){
//     if (x > p_x  || pacmap[x][y+1] == '#'){return;}
//     if (pacmap[x][y+1] == '*'){
//         star++;
//         pacmap[x][y] = '#';
//         y++;
//     }
//     else if (pacmap[x][y+1] == '.'){
//         pacmap[x][y] = '#';
//         y++;
//     }

//     right_go(p_x, p_y);
// }

// void left_go(int p_x, int p_y){
//     if (y < 0 || pacmap[x][y-1] == '#'){return;}

//     if (pacmap[x][y-1] == '*'){
        
//         pacmap[x][y] = '#';
//         y--;
//     }
//     else if (pacmap[x][y-1] == '.'){
//         pacmap[x][y] = '#';
//         y--;
//     }

//     left_go(p_x, p_y);
// }

// void up_go(int p_x, int p_y){
//     if (x < 0 || pacmap[x-1][y] == '#'){return;}

//     if (pacmap[x-1][y] == '*'){
//         star++;
//         pacmap[x][y] = '#';
//         x--;
//     }
//     else if (pacmap[x-1][y] == '.'){
//         pacmap[x][y] = '#';
//         x--;
//     }

//     up_go(p_x, p_y);
// }

// void down_go(int p_x, int p_y){
//     if (x > p_x || pacmap[x+1][y] == '#'){return;}

//     if (pacmap[x+1][y] == '*'){
//         star++;
//         pacmap[x][y] = '#';
//         x++;
//     }
//     else if (pacmap[x+1][y] == '.'){
//         pacmap[x][y] = '#';
//         x++;
//     }

//     down_go(p_x, p_y);
// }




int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 0 ; i < test_case ; i++){
        int p_x, p_y;
        scanf("%d %d", &p_x, &p_y); getchar();
        for (int j = 0 ; j < p_y; j++){
            scanf("%s", pacmap[j]); getchar();
            for (int k = 0 ; k < p_x; k++){
                if (pacmap[j][k] == 'P'){
                    x = j;
                    y = k;
                }
            }
        }

        

        // while (1){
        //     if (pacmap[x+1][y] == '#' && pacmap[x-1][y] == '#' && pacmap[x][y+1] == '#' && pacmap[x][y-1] == '#'){break;}
        //     right_go(p_x, p_y);
        //     for (int l = 0; l < p_y; l++){
        //         printf("%s\n", pacmap[l]);
        //     }
        //     if (pacmap[x+1][y] == '#' && pacmap[x-1][y] == '#' && pacmap[x][y+1] == '#' && pacmap[x][y-1] == '#'){break;}
        //     left_go(p_x, p_y);
        //     for (int l = 0; l < p_y; l++){
        //         printf("%s\n", pacmap[l]);
        //     }
        //     if (pacmap[x+1][y] == '#' && pacmap[x-1][y] == '#' && pacmap[x][y+1] == '#' && pacmap[x][y-1] == '#'){break;}
        //     up_go(p_x, p_y);
        //     for (int l = 0; l < p_y; l++){
        //         printf("%s\n", pacmap[l]);
        //     }
        //     if (pacmap[x+1][y] == '#' && pacmap[x-1][y] == '#' && pacmap[x][y+1] == '#' && pacmap[x][y-1] == '#'){break;}
        //     down_go(p_x, p_y);
        //     for (int l = 0; l < p_y; l++){
        //         printf("%s\n", pacmap[l]);
        //     }
        // }
        
        printf("Case #%d: %d\n", i+1, star);
        star = 0;
        x = -1;
        y = -1;
    }
}

// void gogogo(int posisix, int posisiy, int p_x, int p_y){
//     if (posisix < 0 || posisix > p_x || posisiy < 0 || posisiy > p_y || (pacmap[posisix+1][posisiy] == '#' && pacmap[posisix-1][posisiy] == '#' && pacmap[posisix][posisiy+1] == '#' && pacmap[posisix][posisiy-1] == '#')){return;}


// }