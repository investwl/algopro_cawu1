#include <stdio.h>

unsigned long long int custom_binary(unsigned long long int left, unsigned long long int right, unsigned long long int angka){
	unsigned long long int temp = left + (right - left) / 2;
	unsigned long long int formula1 = temp * (temp + 1) * ((2 * temp) + 1) / 6; 
	unsigned long long int formula2 = (temp + 1) * (temp + 2) * ((2 * temp) + 2) / 6;
	//printf("%llu / %llu\n", formula1, formula2);
	if (formula1 == angka){
		return temp;
	}
	else if (formula2 == angka){
		return temp + 1;
	}
	else if (formula1 < angka && formula2 > angka){
		return temp + 1;
	}
	else if (formula1 > angka && formula2 < angka){
		return temp;
	}
	else if (formula1 < angka && formula2 < angka){
		return custom_binary(temp + 1, right, angka);
	}
	else if (formula1 > angka && formula2 > angka){
		return custom_binary(left, temp - 1, angka);
	}
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 0 ; i < test_case ; i++){
        unsigned long long int angka;
        scanf("%llu", &angka); getchar();
		unsigned long long int counting = 1442252; // counted
		printf("Case #%d: %llu\n", i + 1, custom_binary(0, counting, angka));
    }
}
