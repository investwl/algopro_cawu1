#include <stdio.h>

int inboard(int x, int y){
    return (x >= 0 && x < 8 && y >= 0 && y < 8);
}

int checkmove(int xw, int yw, int xb, int yb, int move){
    if (xw == xb && yw == yb){return 1;}

    if (move <= 0){
        return 0;
    }

    int mx[] = {1, -1, 1,-1, 2, -2, 2, -2}; // kemungkinan sumbu x
	int my[] = {2, 2, -2, -2, 1, 1, -1, -1}; // kemungkinan sumbu y

    for (int i = 0 ; i < 8 ; i++){
        int tempxw = xw + mx[i];
        int tempyw = yw + my[i];
        if (inboard(tempxw, tempyw)){
            if (checkmove(tempxw, tempyw, xb, yb, move - 1)){
                return 1;
            }
            for (int j = 0 ; j < 8 ; j++){
                int tempxb = xb + mx[j];
                int tempyb = yb + my[j];
                if (inboard(tempxb, tempyb)){
                    if (checkmove(tempxw, tempyw, tempxb, tempyb, move - 1)){
                        return 1;
                    }
                }
            }
        }
    }

    return 0;
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 0 ; i < test_case ; i++){
        int move;
        scanf("%d", &move); getchar();
        char tumbalhuruf1, tumbalhuruf2;
        int huruftoangka1, tumbalangka1, huruftoangka2, tumbalangka2;
        scanf("%c%d %c%d", &tumbalhuruf1, &tumbalangka1, &tumbalhuruf2, &tumbalangka2);
        huruftoangka1 = (int)tumbalhuruf1 - 'A';
        huruftoangka2 = (int)tumbalhuruf2 - 'A';
        int xw = huruftoangka1;
        int yw = tumbalangka1 - 1;
        int xb = huruftoangka2;
        int yb = tumbalangka2 - 1;
        int result = checkmove(xw, yw, xb, yb, move);
        if (result){printf("Case #%d: YES\n", i+1);}
        else{printf("Case #%d: NO\n", i+1);}
    }
}