#include<stdio.h>
#include<time.h>
#include<math.h>

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


//  Quick sort partitioning
int Partition(int l, int r, int a[]) {

    int pivot = a[l];

    int count = 0;
    for (int i = l + 1; i <= r; i++) {
        if (a[i] <= pivot) {
            count++;
        }
    }

    // Giving pivot element its correct position
    int indexOfPivot = l + count;

    // swap
    int temp = a[indexOfPivot];
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
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++,j--;
        }
    }

    return indexOfPivot;
}

//  Quick Sort
void quicksort( int l, int r, int a[]) {
    if(l<r) {
        int pivot = Partition(l,r,a);
        quicksort(l,pivot-1,a);
        quicksort(pivot + 1,r,a);
    }
}




int main() {
    n = 10000;
    int arr1[n], arr2[n];
    srand(time(NULL));
    clock_t start,finish;
    double bubbleSortTime, quickSortTime;

    printf("The random array\n");
    for(int i = 0 ; i < n ; i++) {
        arr1[i] = arr2[i] = rand();  // generate random array
        printf("%d ",arr1[i]);
    }

    printf("\n\n");

    // start the clock before sorting algorithm and finish after it
    // to measure execution time
    start = clock();
    bubble_sort(arr1);
    finish = clock();

    bubbleSortTime =(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;


    // start the clock before sorting algorithm and finish after it
    // to measure execution time
    start = clock();
    quicksort(0,n-1,arr2);
    finish = clock();

    quickSortTime =(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;


    printf("Array after sort\n");
    for(int j=0; j<n; j++) {
        printf("%d ",arr1[j]);
    }
    printf("\n\n");

    printf("BubbleSortTime: %lf ms\n", bubbleSortTime);
    printf("QuickSortTime: %lf ms\n", quickSortTime);
}


