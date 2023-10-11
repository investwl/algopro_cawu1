#include <stdio.h>

int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d\n", &x1, &y1);
    scanf("%d %d\n", &x2, &y2);
    scanf("%d %d\n", &x3, &y3);
    scanf("%d %d", &x4, &y4);
    printf("%d\n%d\n%d\n%d\n", (x1 * y1), (x2 * y2), (x3 * y3), (x4 * y4));
}