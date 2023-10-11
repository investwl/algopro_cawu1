#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        unsigned long long int how_many_pages, pages_to_go, half_page;
        scanf("%llu %llu", &how_many_pages, &pages_to_go);
        half_page = how_many_pages / 2;
        if (pages_to_go <= half_page){
            printf("Case #%d: %llu\n", i, pages_to_go / 2);
        }
        else if (pages_to_go % 2 == 0 && pages_to_go > half_page){
            printf("Case #%d: %llu\n", i, (how_many_pages - pages_to_go) / 2);
        }
        else{printf("Case #%d: %llu\n", i, (how_many_pages - pages_to_go + 1) / 2);}
    }
}