#include <stdio.h>

int main() {
    int height, testcase;
    scanf("%d", &testcase);
    for(int k = 0; k<testcase; k++){
    scanf("%d", &height);
        for (int i = 1; i <= height; i++) {
            // Print spaces to align the triangle
            for (int j = 1; j <= height - i; j++) {
            printf(" ");
            }
        
            // Print asterisks for this row
            for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
            }
            
        printf("\n");
        }
    }

    return 0;
}





