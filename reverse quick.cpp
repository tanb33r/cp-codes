#include<bits/stdc++.h>
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
using namespace std;


int parti(int l, int r, int a[]) {
    int i = l;
    for (int j = l; j < r; j++)
        if (a[j] > a[r])
            swap(a[i++], a[j]);
    swap(a[i++], a[r]);
    return i;
}
void quicksort( int l, int r, int a[]) {
    if(l<r) {
        int pivot = parti(l,r,a);
        quicksort(l,pivot-1,a);
        quicksort(pivot + 1,r,a);
    }
}

/*
 5 5 4 2 3 1
 7 1 2 7 8 3 4 5
*/
int main() {
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i <n ; i++) cin>>a[i];
    quicksort(0,n-1,a);
    for(int i = 0 ; i <n ; i++) cout<<a[i]<<" ";
    cout<<"\n";
}
