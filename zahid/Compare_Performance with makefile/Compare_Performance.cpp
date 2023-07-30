#include<stdio.h>
#include<time.h>
#include<math.h>
#include "Compare_Performance.h"


int main() {
    int n;
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
    bubble_sort(arr1, n);
    finish = clock();

    bubbleSortTime =(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;


    // start the clock before sorting algorithm and finish after it
    // to measure execution time
    start = clock();
    quicksort(0,n-1,arr2,n);
    finish = clock();

    quickSortTime =(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;


    printf("Array after sort\n");
    for(int j=0; j<n; j++) {
        printf("%d ",arr1[j]);
    }
    printf("\n\n");

    printf("BubbleSortTime: %lf ms\n", bubbleSortTime);
    printf("QuickSortTime: %lf ms\n", quickSortTime);


    char str[50];
    printf("\n\n\nPress enter to continue: ");
    gets(str);
}


