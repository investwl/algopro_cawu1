#include <stdio.h>
#include <string.h>

int main(){
    char string[1001];
    int count = 0;
    scanf("%s", string);
    int str_len = strlen(string);
    char tampung[1001];
    int counter_tampung = 0;
    for (int i = 0; i < str_len; i++){
        int flag = 0;
        for (int j = 0 ; j < str_len; j++){
            if (string[i] == tampung[j]){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            tampung[counter_tampung] = string[i];
            count++;
            counter_tampung++;
        }
    }
    // int counter = 0;
    for (int k = 0; k < str_len; k++){
        for (int l = 1+k; l < str_len; l++){
            // if (string[k] != string[l]){
            //     counter++;
            // }
            if (string[k] == string[l]){
                char tumbal[1001];
                int penghitung = 0;
                for (int z = k+1; z < l; z++){
                    tumbal[penghitung] = string[z];
                    penghitung++;
                }
                int tumbal_len = strlen(tumbal);
                int counter = tumbal_len;
                int penanda = 1;
                for (int h = 0; h < tumbal_len; h++){
                    if (h == h / 2){break;}
                    if (tumbal[h] != tumbal[counter]){
                        penanda = 0;
                    }
                }
                if (penanda == 1){count++;}
            }
        }
    }
    printf("%d\n", count);
    
}











                // int indicate = 0;
                // int count_reverse = l-1;
                // for (int a = k+1; a <= l-1; a++){
                //     if (a == count_reverse){
                //         indicate = 1;
                //         break;
                //     }
                //     if (string[a] == string[count_reverse]){
                //         count_reverse--;
                //         continue;
                //     }
                // }
                // if (indicate == 1){
                //     count++;
                // }