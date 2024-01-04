#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int partition(double* tampung_temp, double* temperature, char city[100][1001], char* metric, int left, int right){
    int pivot = right;
    int swap = left;

    for (int i = left; i < pivot; i++){
        if (tampung_temp[i] < tampung_temp[pivot]){
            double try = tampung_temp[i];
            tampung_temp[i] = tampung_temp[swap];
            tampung_temp[swap] = try;

            double bentar = temperature[i];
            temperature[i] = temperature[swap];
            temperature[swap] = bentar;

            char hah[1001];
            strcpy(hah, city[i]);
            strcpy(city[i], city[swap]);
            strcpy(city[swap], hah);

            char tuker;
            tuker = metric[i];
            metric[i] = metric[swap];
            metric[swap] = tuker;

            swap++;
        }
        else if (tampung_temp[i] == tampung_temp[pivot]){
            if (strcmp(city[i], city[pivot]) < 0){
                double try = tampung_temp[i];
                tampung_temp[i] = tampung_temp[swap];
                tampung_temp[swap] = try;

                double bentar = temperature[i];
                temperature[i] = temperature[swap];
                temperature[swap] = bentar;

                char hah[1001];
                strcpy(hah, city[i]);
                strcpy(city[i], city[swap]);
                strcpy(city[swap], hah);

                char tuker;
                tuker = metric[i];
                metric[i] = metric[swap];
                metric[swap] = tuker;
                swap++;
            }
        }
    }
    double try = tampung_temp[pivot];
    tampung_temp[pivot] = tampung_temp[swap];
    tampung_temp[swap] = try;

    double bentar = temperature[pivot];
    temperature[pivot] = temperature[swap];
    temperature[swap] = bentar;

    char hah[1001];
    strcpy(hah, city[pivot]);
    strcpy(city[pivot], city[swap]);
    strcpy(city[swap], hah);

    char tuker;
    tuker = metric[pivot];
    metric[pivot] = metric[swap];
    metric[swap] = tuker;

    return swap;
}

void quick_sort(double* tampung_temp, double* temperature, char city[100][1001], char* metric, int left, int right){
    if (left > right){return;}

    int mid = partition(tampung_temp, temperature, city, metric, left, right);

    quick_sort(tampung_temp, temperature, city, metric, left, mid - 1);
    quick_sort(tampung_temp, temperature, city, metric, mid + 1, right);
}

int main(){
    FILE *fptr = fopen("testdata.in", "r");
    char city[101][1001];
    double temperature[101];
    char metric[101];
    int length = 0;
    for (int i = 0 ; i < 100; i++){
        fscanf(fptr, " %[^#]#%lf#%c", city[i], &temperature[i], &metric[i]);
        if (strlen(city[i]) == 0){
            break;
        }
        length++;
    }


    double tampung_temp[101];
    for (int i = 0 ; i < length; i++){
        if (metric[i] == 'F'){
            tampung_temp[i] = (temperature[i] - 32) * 5 / 9;
            continue;
        }
        tampung_temp[i] = temperature[i];
    }

    quick_sort(tampung_temp, temperature, city, metric, 0, length - 1);

    for (int i = 0 ; i < length; i++){printf("%s is %.2lf%c\n", city[i], temperature[i], metric[i]);}

    fclose(fptr);
}