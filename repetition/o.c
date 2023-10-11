#include <stdio.h>

int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i<=test_case; i++){
        int available, capacity, owned, plate;
        scanf("%d %d %d", &available, &capacity, &owned);
        for (int j = 0; j < available; j++){
            scanf("%d", &plate);
            if (plate <= capacity && plate > owned){
                owned = plate;
            }
        }
        printf("Case #%d: %d\n", i, owned);
    }
}

// piring, kapasitas perut, yang didapet
// piring1, piring2, piring n
// if kapasitas perut > piring n && piring n > yang didapet --> yang didapet = piring n