#include <stdio.h>
#include <string.h>

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 0 ; i < test_case ; i++){
        char palin[1000];
        scanf("%s", palin); getchar();
        int left = 0, right = strlen(palin) - 1;
        int flag = 1;
        while (left < right){
            if (palin[left] != palin[right]){
                flag = 0;
                break;
            }
            left++;
            right--;
        }
        if (flag == 1){printf("Case #%d: yes\n", i+1);}
        else{printf("Case #%d: no\n", i+1);}
    }
}