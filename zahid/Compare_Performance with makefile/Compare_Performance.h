
//  Bubble sort
void bubble_sort(int a[], int n) {
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
int Partition(int l, int r, int a[], int n) {

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
void quicksort( int l, int r, int a[], int n) {
    if(l<r) {
        int pivot = Partition(l,r,a,n);
        quicksort(l,pivot-1,a,n);
        quicksort(pivot + 1,r,a,n);
    }
}

