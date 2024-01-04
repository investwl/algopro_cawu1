#include <stdio.h>

int jojonanci(int index, int first, int second);

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1; i <= test_case ; i++){
        int index, first, second;
        scanf("%d %d %d", &index, &first, &second);
        printf("Case #%d: %d\n", i, jojonanci(index, first, second));
    }
}

int jojonanci(int index, int first, int second){
    if (index == 0){
        return first;
    }
    else if (index == 1){
        return second;
    }
    else{
        return jojonanci(index - 1, first, second) - jojonanci(index - 2, first, second);
    }
}