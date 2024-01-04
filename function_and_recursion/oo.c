#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char pacmap[101][101];

int star = 0;

int gogogo(char pacmap[101][101], int p_x, int p_y, int x, int y){
    if (x < 0 || x >= p_x || y < 0 || y >= p_y || pacmap[x][y] == '#'){
        return 0;
    }

    if (pacmap[x][y] == 'P'){
        pacmap[x][y] = '#';
        int up = gogogo(pacmap, p_x, p_y, x - 1, y);
        int down = gogogo(pacmap, p_x, p_y, x + 1, y);
        int left = gogogo(pacmap, p_x, p_y, x, y - 1);
        int right = gogogo(pacmap, p_x, p_y, x, y + 1);

        return up + down + left + right;
    }
    else if (pacmap[x][y] == '*'){
        pacmap[x][y] = '#'; //kalo unlimited loop diganti jadi #
        int up = gogogo(pacmap, p_x, p_y, x - 1, y);
        int down = gogogo(pacmap, p_x, p_y, x + 1, y);
        int left = gogogo(pacmap, p_x, p_y, x, y - 1);
        int right = gogogo(pacmap, p_x, p_y, x, y + 1);
        star++;
        return up + down + left + right;
    }
    else if (pacmap[x][y] == '.'){
        pacmap[x][y] = '#';
        int up = gogogo(pacmap, p_x, p_y, x - 1, y);
        int down = gogogo(pacmap, p_x, p_y, x + 1, y);
        int left = gogogo(pacmap, p_x, p_y, x, y - 1);
        int right = gogogo(pacmap, p_x, p_y, x, y + 1);

        return up + down + left + right;
    }
    else{return 0;}
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 0 ; i < test_case ; i++){
        int x = -1, y = -1;
        int p_x, p_y;
        scanf("%d %d", &p_x, &p_y); getchar();
        for (int j = 0 ; j < p_x; j++){
            scanf("%s", pacmap[j]); getchar();
            for (int k = 0 ; k < p_y; k++){
                if (pacmap[j][k] == 'P'){
                    x = j;
                    y = k;
                    break;
                }
            }
        }
        int res = gogogo(pacmap, p_x, p_y, x, y);
        printf("Case #%d: %d\n", i+1, star);

        star = 0;
    }
}
