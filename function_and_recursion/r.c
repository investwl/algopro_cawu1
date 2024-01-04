#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char house[101][101];

int dots = 0;

int waterflow(char house[101][101], int p_x, int p_y, int x, int y){
    if (x < 0 || x >= p_x || y < 0 || y >= p_y || house[x][y] == '#'){
        return 0;
    }

    if (house[x][y] == 'S'){
        house[x][y] = '#';
        int up = waterflow(house, p_x, p_y, x - 1, y);
        int down = waterflow(house, p_x, p_y, x + 1, y);
        int left = waterflow(house, p_x, p_y, x, y - 1);
        int right = waterflow(house, p_x, p_y, x, y + 1);

        return 0 + up + down + left + right;
    }
    else if (house[x][y] == '.'){
        dots++;
        house[x][y] = '#';
        int up = waterflow(house, p_x, p_y, x - 1, y);
        int down = waterflow(house, p_x, p_y, x + 1, y);
        int left = waterflow(house, p_x, p_y, x, y - 1);
        int right = waterflow(house, p_x, p_y, x, y + 1);
        return 1 + up + down + left + right;
    }
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 0 ; i < test_case ; i++){
        int x = -1, y = -1;
        int p_x, p_y;
        scanf("%d %d", &p_x, &p_y); getchar();
        for (int j = 0 ; j < p_x; j++){
            scanf("%s", house[j]); getchar();
            for (int k = 0 ; k < p_y; k++){
                if (house[j][k] == 'S'){
                    x = j;
                    y = k;
                    break;
                }
            }
        }
        int res = waterflow(house, p_x, p_y, x, y);
        printf("Case #%d: %d\n", i+1, dots);

        dots = 0;
    }
}
