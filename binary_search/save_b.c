#include <stdio.h>

// kalo fail bikin array yg isinya formula itu ke arr sepanjang 1442251

long long int binary_search(long long int left, long long int right, long long int angka){
	if (left > right){
		return -1;
	}

	long long int smallest = left + (right - left) / 2;

	long long int formula1 = smallest * (smallest + 1) * ((2 * smallest) + 1) / 6;
	long long int formula2 = (smallest + 1) * (smallest + 2) * ((2 * (smallest+1)) + 1) / 6;
	if (formula1 == angka){
		return smallest;
	}
	else if (formula2 == angka){
		return smallest + 1;
	}
	else if (formula1 > angka && formula2 < angka){
		return smallest;
	}
	else if (formula1 < angka && (formula2 > angka || left == right)){
		return smallest + 1;
	}
	else if (formula1 > angka){
		return binary_search(left, smallest - 1, angka);
	}
	else if (formula1 < angka){
		return binary_search(smallest + 1 , right, angka);
	}
}

int main(){
    int test_case;
    scanf("%d", &test_case); getchar();
    for (int i = 0 ; i < test_case ; i++){
        long long int angka;
        scanf("%lld", &angka); getchar();
		// 1442251 ngasilin diatas 10^18. bisa dibagi 21 kali
		int flag = binary_search(1, 1442251, angka);
		if (flag != -1){
			printf("Case #%d: %d\n", i+1, flag);
		}
    }
}
