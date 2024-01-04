#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 8

int max_move = 100;

int move(int x1,int x2,int y1,int y2, int gerak){
	if (x1 < 0 || x1 > 7 || y1 < 0 || y1 > 7 || gerak > 6){
		return 0;
	}
	
	if (x1 == x2 && y1 == y2){
		if (max_move > gerak){
			max_move = gerak;
		}
	}
	int mx[] = {1, -1, 1,-1, 2, -2, 2, -2}; // kemungkinan sumbu x
	int my[] = {2, 2, -2, -2, 1, 1, -1, -1}; // kemungkinan sumbu y
	
	int j;
	for (j = 0; j < MAX; j++){
		if(move(x1 + mx[j], x2, y1 + my[j], y2, gerak + 1) == 1){
			return 1;
		}
	}
}

int main(){
	int test_case;
	scanf("%d", &test_case); getchar();
	int i;
	for (i = 0 ; i < test_case; i++){
		int x1, x2, y1, y2;
		char cx1, cx2;
		
		scanf("%c%d %c%d", &cx1, &y1, &cx2, &y2); getchar();
		x1 = (int)cx1 - 'A';
		x2 = (int)cx2 - 'A';
		y1 -= 1; y2 -= 1;
		
		int rec = move(x1, x2, y1, y2, 0);
		
		printf("Case #%d: %d\n",i +1, max_move);
		
		max_move = 100;
	}
	
	
	
}
