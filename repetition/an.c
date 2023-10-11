#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        int lett1 = 0, lett2 = 0, lett3 = 0, lett4 = 0, lett5 = 0, lett6 = 0;
        scanf("%d %d %d %d %d %d", &lett1, &lett2, &lett3, &lett4, &lett5, &lett6);
        printf("Case #%d: ", i);
        for (int w1 = 1; w1 <= lett1; w1++){
            printf("%c", 'a');
        }
        for (int w2 = 1; w2 <= lett2; w2++){
            printf("%c", 's');
        }
        for (int w3 = 1; w3 <= lett3; w3++){
            printf("%c", 'h');
        }
        for (int w4 = 1; w4 <= lett4; w4++){
            printf("%c", 'i');
        }
        for (int w5 = 1; w5 <= lett5; w5++){
            printf("%c", 'a');
        }
        for (int w6 = 1; w6 <= lett6; w6++){
            printf("%c", 'p');
        }
        printf("\n");
    }
}