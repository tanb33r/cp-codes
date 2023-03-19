#include <bits/stdc++.h>
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"

using namespace std;
const int n = 6;
int a[n]= {2,8,5,3,9,4},b[n],c[n];

//  insertion sort
void insertion_sot() {
    for(int j = 1; j<n; j++) {
        int i = j;
        while(i>0 && a[i] < a[i-1]) {
            swap(a[i],a[i-1]);
            i--;
        }
    }
}


void insertion_sort() {
    for(int j=1,i=1; j < n; j++,i=j) {
        while(i > 0 && a[i] < a[i-1]) {
            deb(i<<" "<<j);
            swap(a[i],a[i-1]),i--;
            arrp(a,n);
        }
    }
}

int main() { arrp(a,n);
    insertion_sort();
}
