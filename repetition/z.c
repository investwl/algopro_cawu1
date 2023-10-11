#include <stdio.h>

int main(){
    int main_berapa_kali, lokasi = 0, dice_sum, jailed = 0, i;
    scanf("%d\n", &main_berapa_kali);
    for (i = 0; i < main_berapa_kali; i++){
    	scanf("%d", &dice_sum);
    	// loop pas di lokasi 10 nya pas roll dice di continue sekali
    	// if (jailed == 1){
    	// 	jailed = 0;
		// 	continue;
		// }
		// else{
		lokasi += dice_sum;
			// }

    	if (lokasi >= 40){
    		lokasi = lokasi - 40;
		}
    	// jika sampe di lokasi ke 30, pindah lokasi ke 10, ketika dia jalan
    	if (lokasi == 30){
    		lokasi = 10;
    		// jailed = 1;
		}
		// jika lokasi = 12, go to 28
	    if (lokasi == 12){
	    	lokasi = 28;
		}
	    //  jika lokasi 35, go to 7
	    else if (lokasi == 35){
	    	lokasi = 7;
		}
	    //  bentuk monopolynya max 39, begitu sampe 39 + 1, maka bakal kembali
	    //  ke start --> 0
	}
	printf("%d\n", lokasi);
    
    
}
