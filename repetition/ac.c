#include <stdio.h>

int main(){
    int test_case, candy_type, candy_price, cheapest_candy;
    unsigned long long int money;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        // terima brp bnyk tipe candy exist dan money
        scanf("%d %llu", &candy_type, &money);
        // candy exist dipake buat looping seberapa banyak
        for (int j = 1; j <= candy_type; j++){
            scanf("%d", &candy_price);
            // jika loop == 1, assign variable = harga candy
            if (j == 1){cheapest_candy = candy_price;}
            else{
                // else, cek jika harga candy < variable, if yes, variable = harga candy
                if (candy_price < cheapest_candy){cheapest_candy = candy_price;}
            }
            // ketika sudah kelar loop utk dapat harga candy termurah,
            // variable harga termurah / money dalam int
        }
        printf("Case #%d: %lld\n", i,  (money / cheapest_candy));
        // you got the result
    }
}