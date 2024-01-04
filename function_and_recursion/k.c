#include <stdio.h>

int not_fibonacci(int first, int second, int index);

int main(){
    int first, second, index;
    scanf("%d %d", &first, &second); getchar();
    scanf("%d", &index);
    printf("%d\n", not_fibonacci(first, second, index));
}

int not_fibonacci(int first, int second, int index){
    if (index == 0){
        return first;
    }
    else if (index == 1){
        return second;
    }
    else{
        return not_fibonacci(first, second , index - 1) + not_fibonacci(first, second, index - 2);
    }
}