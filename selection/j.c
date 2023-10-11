#include <stdio.h>

int main(){
    // ketika first + 1 dan second - 1 ketemu di third di waktu yang sama, 1
    // else -1
    unsigned long long int first, second, third, flag = 0, count = 0;
    scanf("%llu %llu %llu", &first, &second, &third);
    // if (third - first == second - third){
    //     printf("%llu\n", (second - third));
    // }
    // else{
    //     printf("%d\n", -1);
    //}
    for (int i = 0; i < 100; i++){
        if (first > third && second < third){
            break;
        }
        else if (first == third && second == third){
            flag = 1;
            break;
        }
        else {
            first++;
            second--;
            count++;
        }
    }
    if (flag == 1) {printf("%ld\n", count);}
    else{printf("%d\n", -1);}
}