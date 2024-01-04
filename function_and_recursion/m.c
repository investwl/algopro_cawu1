#include <stdio.h>

int a_to_b(int start, int end);

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 1 ; i <= test_case ; i++){
        int start, end;
        scanf("%d %d", &start, &end);
        int result = a_to_b(start, end);
        if (result == 1){
            printf("Case #%d: YES\n", i);
        }
        else{
            printf("Case #%d: NO\n", i);
        }
        
    }
}

int a_to_b(int start, int end){
    if (start == end){
        return 1;
    }
    else if (start == 1 && start == end){
        return 1;
    }
    else if (start == 1){
        return 0;
    }
    else{
        if (start % 2 == 0){
            start /= 2;
            return a_to_b(start, end);
        }
        else{
            start *= 3;
            start++;
            return a_to_b(start, end);
        }
    }
}