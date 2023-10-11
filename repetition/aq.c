#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int test_case;
    scanf("%d\n", &test_case);
    for (int i = 1; i <= test_case; i++){
        char ip_address[101];
        int count = 0;
        scanf("%s", &ip_address);
        int flag = 1;
        for (int j = 0; j < strlen(ip_address); j++){
            if (ip_address[j] == '.'){count++;}
        }
        // pengecekan bentuk ip address yg salah
        for (int j = 0; j < strlen(ip_address); j++){
            //cek awal / akhir titik dan cek count 5 ato gk
            if (ip_address[0] == '.' || ip_address[strlen(ip_address) - 1] == '.' || count!=5){
                flag = 0;
                break;
            }
            else if (ip_address[j] == '.' && ip_address[j+1] == '.'){
                flag = 0;
                break;
            }
        }
        if (flag == 1){printf("Case #%d: YES\n", i);}
        else{printf("Case #%d: NO\n", i);}
    }
}