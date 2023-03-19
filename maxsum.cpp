#include <stdio.h>
#include <limits.h>
using namespace std;

int maxCrossingSum(int arr[], int l, int m, int h) {
    int sum = 0, lsum = 0, rsum = 0;
    for (int i = m; i >= l; i--) {
        sum += arr[i];
        lsum = max(lsum, sum);
    }
    sum = 0;
    for (int i = m+1; i <= h; i++) {
        sum += arr[i];
        rsum = max(sum, rsum);
    }
    return max(lsum + rsum, max(lsum, rsum);
}
int maxsubarray(int arr[], int l, int h) {
    if (l == h) return arr[l];
    int m = (l + h)/2;
    return max(maxsubarray(arr, l, m),max(maxsubarray(arr, m+1, h),
                                          maxCrossingSum(arr, l, m, h));
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int max_sum = maxsubarray(arr, 0, n-1);
    printf("Maximum sum %d\n", max_sum);
}

