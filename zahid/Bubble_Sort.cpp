#include<stdio.h>

int n;

//  Bubble sort
void bubble_sort(int a[]) {
    int sorted = 0;
    for(int i = n; i > 0 && !sorted; i--) {
        for(int j = 1, sorted = 1; j < i; j++) {
            if(a[j] < a[j-1]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] =  temp;
                sorted = 0;
                // if previous element is greater than the next,
                // then the array is not sorted yet.
            }
        }
    }
}


int main() {
    printf("Enter size of the array: \n");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements of the array: \n");
    for(int i = 0 ; i <n ; i++)
        scanf("%d",&a[i]);

    printf("\n");
    bubble_sort(a);

    printf("Array after sorting: \n");
    for(int i = 0 ; i <n ; i++)
        printf("%d ",a[i]);
    printf("\n");

}





