#include <stdio.h>

int main(){
    int day_amount;
    scanf("%d\n", &day_amount);
    int amount_of_views[day_amount];
    for (int i = 0; i < day_amount; i++){
        scanf("%d", &amount_of_views[i]);
    }
    getchar();
    int friend_amount, index_case = 1;
    scanf("%d\n", &friend_amount);
    for (int j = 0; j < friend_amount; j++){
        int start, end, total_views = 0;
        scanf("%d %d", &start, &end);
        start--;
        end--;
        for (int k = start; k <= end; k++){
            total_views += amount_of_views[k];
        }
        printf("Case #%d: %d\n", index_case, total_views);
        index_case++;
    }
}