#include <stdio.h>

int main(){
    int friend;
    scanf("%d", &friend); getchar();
    int flag = 1, opinion;
    for (int i = 0; i < friend; i++){
        scanf("%d", &opinion);
        if (opinion){
            printf("not easy\n");
            flag = 0;
            break;
        }
    }
    if (flag){printf("easy\n");}
}