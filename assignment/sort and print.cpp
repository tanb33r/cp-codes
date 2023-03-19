#include <bits/stdc++.h>
using namespace std;



int a[]= {1,4,2,3};




int n = sizeof(a)/sizeof(a[0]);

void printarray(int a[]) {
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
    puts("\n");
}
void insertion_sort() {
    for(int k=1,l=1; k < n; k++,l=k)
        while(l > 0 && a[l] < a[l-1]) {
            swap(a[l],a[l-1]),l--;
            printarray(a);
        }
}

void bubble_sort() {
    int sorted = 0;
    for(int i = n; i > 0 && !sorted; i--)
        for(int j = sorted = 1; j < i; j++)
            if(a[j] < a[j-1]) {
                swap(a[j],a[j-1]),sorted = 0;
                printarray(a);
            }
}

void selection_sort() {
    for (int i = 0; i < n-1; i++) {
        int index = i;
        for (int j = i+1; j < n; j++)
            if (a[j] < a[index]) {
                index = j;
                printarray(a);
            }
        swap(a[index], a[i]);
    }
}


int main() {

    printarray(a);
    insertion_sort();
//    bubble_sort();
//    selection_sort();

}





