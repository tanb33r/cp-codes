#include <stdio.h>

int main() {
    //6(b) i

    int *a, n;
    printf("How many numbers?\n");
    scanf("%d",&n);
    a = (int*) malloc(n * sizeof(int));
    int i =0;
    int sum =0;
    for(i = 0; i < n; ++i) {
        scanf("%d", a + i);
        sum += *(a+i);
    }
    double avg = sum/(double)n;

    printf("%d\n",sum);
    printf("%lf\n",avg);


    // 6(b) ii

    int n1,n2;

    printf("Enter value of 1st number: ");
    scanf("%d",&n1);
    printf("Enter value of 2nd number: ");
    scanf("%d",&n2);

    int *x = &n1, *y =&n2;
    int t = *x;
    *x = *y;
    *y =  t;

    printf("After  Swapping:\n1st number is: %d\n2nd number is: %d\n",n1,n2);

    return 0;

}
