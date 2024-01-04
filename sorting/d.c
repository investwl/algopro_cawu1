#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int partition(char title[100][1001], char name[100][1001], long int views[101], int left, int right){
    int pivot = right;
    int swap = left;

    for (int l = left; l < pivot; l++){
        if (views[l] > views[pivot]){
            long int temp = views[l];
            views[l] = views[swap];
            views[swap] = temp;

            char temp1[1001];
            strcpy(temp1, title[l]);
            strcpy(title[l], title[swap]);
            strcpy(title[swap], temp1);

            char temp2[1001];
            strcpy(temp2, name[l]);
            strcpy(name[l], name[swap]);
            strcpy(name[swap], temp2);

            swap++;
        }
        else if (views[l] == views[pivot]){
            if (strcmp(title[l], title[pivot]) < 0){
                char temp1[1001];
                strcpy(temp1, title[l]);
                strcpy(title[l], title[swap]);
                strcpy(title[swap], temp1);
            }
        }
    }

    long int temp = views[pivot];
    views[pivot] = views[swap];
    views[swap] = temp;

    char temp1[1001];
    strcpy(temp1, title[pivot]);
    strcpy(title[pivot], title[swap]);
    strcpy(title[swap], temp1);

    char temp2[1001];
    strcpy(temp2, name[pivot]);
    strcpy(name[pivot], name[swap]);
    strcpy(name[swap], temp2);

    return swap;
}

void quick_sort(char title[100][1001], char name[100][1001], long int views[101], int left, int right){
    if (left > right){return;}

    int mid = partition(title, name, views, left, right);

    quick_sort(title, name, views, left, mid - 1);
    quick_sort(title, name, views, mid + 1, right);
}

int main(){
    FILE *fptr = fopen("testdata.in", "r");
    char title[100][1001];
    char name[100][1001];
    long int views[101];
    int length = 0;
    for (int i = 0 ; i < 100; i++){
        char tumbal_title[1001];
        char tumbal_name[1001];
        long int tumbal_view = 0;
        fscanf(fptr, " %[^#]#%[^#]#%ld", tumbal_title, tumbal_name, &tumbal_view);
        if (strlen(tumbal_title) == 0 || strlen(tumbal_name) == 0 || tumbal_view == 0){
            length = i;
            break;
        }
        strcpy(title[i], tumbal_title);
        strcpy(name[i], tumbal_name);
        views[i] = tumbal_view;
    }

    quick_sort(title, name, views, 0, length);

    for (int i = 0 ; i < length; i++){
        printf("%s by %s - %d\n", title[i], name[i], views[i]);
    }
    fclose(fptr);
}