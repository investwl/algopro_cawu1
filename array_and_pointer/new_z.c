#include <stdio.h>

int main(){
    int test_case;
    scanf("%d", &test_case);
    for (int i = 1; i <= test_case; i++){
        int length, breath;
        scanf("%d %d", &length, &breath);
        char the_steps[length];
        scanf("%s", the_steps);
        int tumbal_breath = breath;
        int flag = 1;
        int latest_one;
        for (int j = 0; j < length; j++){
            if (tumbal_breath == 0){
                printf("Case #%d: Dead\n", i);
                flag = 0;
                break;
            }
            if (the_steps[j] == '0'){
                tumbal_breath--;
            }
            else if (the_steps[j] == '1'){
                tumbal_breath = breath;
                latest_one = j+1; //ini udh  bener
            }
        }
        if (flag == 0){continue;}
        if (length - latest_one >= breath){printf("Case #%d: Alive\n", i);}
        else{printf("Case #%d: Dead\n", i);}
    }
}