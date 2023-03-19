/*
    Tanvir Taher
    2018-3-60-123
    CSE241 SEC 1
*/

#include <bits/stdc++.h>
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  ps(x)              cout<<(#x)<<endl
using namespace std;

const int n = 1e5;
int arr[n],brr[n];
void printarr(int a[], int N) {
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}
/*
void merging( int l, int m, int r) {

    int n1 = m - l + 1,n2 = r - m;
    int ar1[n1], ar2[n2];

    for (int i = 0; i < n1; i++) ar1[i] = arr[l + i];
    for (int i = 0; i < n2; i++) ar2[i] = arr[m + 1 + i];

    int i=0, j=0, k=l;
    while (i < n1 && j < n2)
        if (ar1[i] <= ar2[j])   arr[k++] = ar1[i++];
        else                    arr[k++] = ar2[j++];

    while (i < n1) arr[k++] = ar1[i++];
    while (j < n2) arr[k++] = ar2[j++];
}

void msort( int l, int r) {
    if (l < r) {
        int m = ((long long)l + r) / 2;
        msort(l, m);
        msort(m + 1, r);
        merging( l, m, r);
    }
}


void Reverse_merging(int l, int m, int r) {

    int n1 = m - l + 1,n2 = r - m;
    int ar1[n1], ar2[n2];

    for (int i = 0; i < n1; i++) ar1[i] = arr[l + i];
    for (int i = 0; i < n2; i++) ar2[i] = arr[m + 1 + i];

    int i=0, j=0, k=l;
    while (i < n1 && j < n2)
        if (ar1[i] > ar2[j])    arr[k++] = ar1[i++];
        else                    arr[k++] = ar2[j++];

    while (i < n1) arr[k++] = ar1[i++];
    while (j < n2) arr[k++] = ar2[j++];
}

void Reverse_msort(int l, int r) {
    if (l < r) {
        int m = ((long long)l + r) / 2;
        Reverse_msort(l, m);
        Reverse_msort(m + 1, r);
        Reverse_merging( l, m, r);
    }
}

*/

int parti(int l, int r) {
    int pivot = brr[r];
    int i = l-1;

    for (int j = l; j < r; j++)
        if (brr[j] < pivot)
            swap(brr[++i], brr[j]);


    swap(brr[i + 1], brr[r]);
    return (i + 1);
}

void quicksort( int l, int r) {
    if(l<r) {
        int pivot = parti(l,r);
        quicksort(l,pivot-1);
        quicksort(pivot + 1,r);
    }
}

int Reverse_parti(int l, int r) {
    int pivot = brr[r];
    int i = l-1;

    for (int j = l; j < r; j++)
        if (brr[j] > pivot)
            swap(brr[++i], brr[j]);


    swap(brr[i + 1], brr[r]);
    return (i + 1);
}

void Reverse_quicksort( int l, int r) {
    if(l<r) {
        int pivot = Reverse_parti(l,r);
        quicksort(l,pivot-1);
        quicksort(pivot + 1,r);
    }
}

int main() {

    srand(time(NULL));
    double lt,T,bt;
    clock_t start,finish;

    for(int i=0; i<n; i++) arr[i] = brr[i] = rand();

    //additional task#1
   /* start = clock();
    msort(0, n - 1);
    finish = clock();
    T = (((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nMerge sort time  %lf ms\n",T);
    //printarr(brr,n);
*/
    start = clock();
    quicksort(0, n - 1);
    finish = clock();
    T = (((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nQuicksort sort time  %lf ms\n",T);
/*
    //additional task#2
    //printarr(arr,n);
    start = clock();
    Reverse_msort(0, n - 1);
    finish = clock();
    T = (((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nReverse Merge sort time  %lf ms\n",T);
//    printarr(arr,n);
//    puts("\n");
*/
    //reverse quicksort is not working


//    start = clock();
//    Reverse_quicksort(0, n - 1);
//    finish = clock();
//    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
//    printf("\n\n\nQuicksort sort time  %lf ms\n",T);
//    printarr(brr,n);

    return 0;
}

