#include<stdio.h>

//  Quick sort partitioning
int Partition(int l, int r, char a[]) {

    char pivot = a[l];

    int count = 0;
    for (int i = l + 1; i <= r; i++) {
        if (a[i] <= pivot) {
            count++;
        }
    }

    // Giving pivot element its correct position
    int indexOfPivot = l + count;

    // swap
    char temp = a[indexOfPivot];
    a[indexOfPivot] = a[l];
    a[l] = temp;

    // Sorting left and right parts of the pivot element
    int i = l, j = r;

    while (i < indexOfPivot && j > indexOfPivot) {

        while (a[i] <= pivot) {
            i++;
        }

        while (a[j] > pivot) {
            j--;
        }

        if (i < indexOfPivot && j > indexOfPivot) {
            // swap
            char temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++,j--;
        }
    }

    return indexOfPivot;
}

//  Quick Sort
void quicksort( int l, int r, char a[]) {
    if(l<r) {
        int pivot = Partition(l,r,a);
        quicksort(l,pivot-1,a);
        quicksort(pivot + 1,r,a);
    }
}



int main() {
    int n;
    printf("Enter size of the array: \n");
    scanf("%d",&n);

    char a[n];
    printf("Enter elements of the array (characters): \n");
    for(int i = 0 ; i <n ; i++) {
        scanf(" %c",&a[i]);
    }

    quicksort(0,n-1,a);

    printf("\n");
    printf("Array after sorting: \n");
    for(int i = 0 ; i < n ; i++)
        printf("%c ",a[i]);
    printf("\n");
}





