/*
    Tanvir Taher
    2018-3-60-123
    CSE241 SEC 1
*/

#include <bits/stdc++.h>
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  ps(x)              cout<<(#x)<<endl
using namespace std;

const int n = 1e4;
int arr[n],brr[n];
void printarr(int a[], int N) {
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

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

//int parti2(int l, int r) {
//    int  pivot = brr[l];
//    int  i = l, j = r;
//
//    while(i<j) {
//        while(brr[i]<=pivot) ++i;
//        while(brr[j]>=pivot) --j;
//        if(i<j) swap(brr[i],brr[j]);
//    }
//    if(j>0)
//        swap(brr[j],brr[l]);
//    return j;
//
//}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;

    while (true)
    {
        // Find leftmost element greater than
        // or equal to pivot
        do
        {
            i++;
        } while (arr[i] < pivot);

        // Find rightmost element smaller than
        // or equal to pivot
        do
        {
            j--;
        } while (arr[j] > pivot);

        // If two pointers met.
        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}



int parti (int l, int r) {
    int pivot = brr[r];
    int i = l;

    for (int j = l; j < r; j++)
        if (brr[j] < pivot) {
            i++,swap(brr[i], brr[j]);
        }

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



int main() {

    srand(time(NULL));
    double lt,T,bt;
    clock_t start,finish;

    for(int i=0; i<n; i++) arr[i] = brr[i] = rand();

    start = clock();
    msort(0, n - 1);

    finish = clock();


    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nMerge sort time  %lf ms",T);


    start = clock();

    quicksort(0, n - 1);
    finish = clock();


    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nQuicksort sort time  %lf ms",T);



    return 0;
}

