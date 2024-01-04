#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    double arr[n], sum[n];
    for (long long int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        if (i == 0) {
            sum[i] = arr[i];
        } else {
            sum[i] = sum[i - 1] + arr[i];
        }
    }

    long long int tc;
    scanf("%lld", &tc);

    for (long long int i = 0; i < tc; i++) {
        double batas;
        scanf("%lf", &batas);

        int maxSegment = -1;
        int left = 0, right = 0;
        double segmentSum = 0;

        while (right < n) {
            segmentSum += arr[right];

            while (segmentSum > batas && left <= right) {
                segmentSum -= arr[left];
                left++;
            }

            int currentSegment = right - left + 1;
            if (segmentSum <= batas && currentSegment > maxSegment) {
                maxSegment = currentSegment;
            }

            right++;
        }

        if (maxSegment <= 0) {
            printf("Case #%lld: -1\n", i + 1);
        } else {
            printf("Case #%lld: %d\n", i + 1, maxSegment);
        }
    }

    return 0;
}

