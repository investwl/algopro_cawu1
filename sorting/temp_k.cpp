#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		int L = 25;
		int arr[L], result[6], sum = 0;
		for (int j = 0; j < L; j++){
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		
		for (int j = 0; j < L - 1; j++){
			int swapped = 0;
			for (int k = 0; k < L - j - 1; k++){
				if (arr[k] > arr[k+1]){
					int temp = arr[k];
					arr[k] = arr[k+1];
					arr[k+1] = temp; 
					swapped = 1;
				}
			}
			if (!swapped) break;
		}

		result[0] = arr[0]/2;
		result[1] = arr[1] - result[0];
		result[4] = arr[24]/2;
		result[3] = arr[23] - result[4];

		sum -= result[0] * 10;
		sum -= result[1] * 10;
		sum -= result[4] * 10;
		sum -= result[3] * 10;
		result[2] = sum / 10;
		
		printf("Case #%d: ", i+1);
		for (int j = 0; j < 5; j++){
			printf("%d", result[j]);
			if (j != 4) printf(" ");
		}
		
		puts("");
	}
	return 0;
}
