/* C++ implementation of QuickSort using Hoare's
partition scheme. */
#include<bits/stdc++.h>
using namespace std;

printar(int arr[])

{
    for(int i = 0 ; i<12; i++)

    {
        cout<<arr[i]<<" ";

    }
    cout<<"\n";


}
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low , j = high;

    while (true) {
        // Find leftmost element greater than
        // or equal to pivot
        while (arr[i] < pivot) i++;


        while (arr[j] > pivot)j--;

        // If two pointers met.
        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
        printar(arr);
    }
}

int xx = 0;
void quickSort(int arr[], int low, int high) {
    if (xx<2) {
        xx++;
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(int arr[], int n) {
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main() {
    int arr[] = { 4, 1, 5, 1, 20, 18, 12, 12, 1, 17, 13, 1};
    int n = 12;
    quickSort(arr, 0, n-1);
            printar(arr);

    return 0;
}

