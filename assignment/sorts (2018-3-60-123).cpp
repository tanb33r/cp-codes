/*
    Tanvir Taher
    2018-3-60-123
    CSE241 SEC 1
*/

#include <bits/stdc++.h>
using namespace std;
const int n = 1e5;
int a[n],b[n],c[n];

void insertion_sort() {
    for(int k=1,l=1; k < n; k++,l=k)
        while(l > 0 && a[l] < a[l-1])
            swap(a[l],a[l-1]),l--;
}

void bubble_sort() {
    int sorted = 0;
    for(int i = n; i > 0 && !sorted; i--)
        for(int j = sorted = 1; j < i; j++)
            if(b[j] < b[j-1])
                swap(b[j],b[j-1]),sorted = 0;
}

void selection_sort() {
    for (int i = 0; i < n-1; i++) {
        int index = i;
        for (int j = i+1; j < n; j++)
            if (c[j] < c[index])
                index = j;
        swap(c[index], c[i]);
    }
}

void printarray(int a[]) {
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    puts("\n");
}

int main() {

    srand(time(NULL));
    double lt,T,bt;
    clock_t start,finish;

    for(int i=0; i<n; i++)
        a[i] = b[i] = c[i] = rand();

    //printarray(a);

    //insertion
    start = clock();
    insertion_sort();
    finish = clock();
    //printarray(a);
    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nInsertion sort time  %lf ms",T);

    //bubble
    start = clock();
    bubble_sort();
    finish = clock();
    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nBubble sort time  %lf ms",T);

    //selection
    start = clock();
    selection_sort();
    finish = clock();
    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nSelection sort time  %lf ms\n\n",T);


    //For sorted arrays

    //insertion
    start = clock();
    insertion_sort();
    finish = clock();
    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nInsertion sort time  %lf ms",T);

    //bubble
    start = clock();
    bubble_sort();
    finish = clock();
    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nBubble sort time  %lf ms",T);

    //selection
    start = clock();
    selection_sort();
    finish = clock();
    T=(((double)(finish-start))/CLOCKS_PER_SEC)*1e4;
    printf("\n\n\nSelection sort time  %lf ms\n\n",T);

}





