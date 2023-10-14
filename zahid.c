#include <stdio.h>
int main() {
    int n;

    scanf("%d",&n);
    double arr[n];
    double min = 1000000;
    double max = 0;
    for(int i = 0; i<n; i++) {
        scanf("%lf",&arr[i]);
    }
    for(int i = 0; i<n; i++) {
        if(arr[i]<min)
            min = arr[i];
        if(arr[i]>max)
        max = arr[i];
    }
    printf("%lf %lf\n",max,min);
}
