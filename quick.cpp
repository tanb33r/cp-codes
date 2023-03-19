#include<bits/stdc++.h>
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
using namespace std;


int Partition(int l, int r, int a[]) {
    int i = l;
    for (int j = l+1; j < r; j++)
        if (a[j] < a[r])
            swap(a[i++], a[j]);

    swap(a[i], a[r]);
    return i;
}
/*
 5 5 4 2 3 1
*/
void quicksort( int l, int r, int a[]) {
    if(l<r) {
        int pivot = Partition(l,r,a);
        quicksort(l,pivot-1,a);
        quicksort(pivot + 1,r,a);
    }
}


int main() {
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i <n ; i++) cin>>a[i];
    quicksort(0,n-1,a);
    for(int i = 0 ; i <n ; i++) cout<<a[i]<<" ";
    cout<<"\n";
}
