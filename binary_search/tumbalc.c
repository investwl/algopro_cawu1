#include<stdio.h>
#include <stdlib.h>

void binarySearch(long long int total[], int n, long long int batas){
    int left=1, right=n;
    while(left<=right){
        int mid = (left + right)/2;
        // printf("%d", mid);
        if(total[mid]==batas){
            printf("%d\n", mid);
            return;
        } else if(total[mid]>batas && total[mid+1]<batas){
            printf("%d\n", mid-1);
            return;
        } else if(total[mid]<batas && (total[mid+1]>batas || left==right)){
            printf("%d\n", mid);
            return;
        } else if(total[mid]<batas){
            left = mid+1;
        } else{
            right = mid-1;
        }
    }
    printf("-1\n");
    return;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr;
    long long int total[n+1];
    total[0] = 0;
    for(int i=1; i<=n; i++){
        scanf("%d", &arr);
        total[i]=total[i-1] + arr;
    }
    int q;
    long long int batas;
    scanf("%d", &q);
    for(int i=1; i<=q; i++){
        scanf("%lld", &batas);
        
        printf("Case #%d: ", i);
        binarySearch(total, n, batas);
    }

    return 0;
}