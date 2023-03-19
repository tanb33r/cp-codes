#include<bits/stdc++.h>
using namespace std;


void mergesort(int l,int r, int a[]) {

    if (l >= r)return;

    int m = ((long long)l + r) / 2;
    mergesort(l, m, a);
    mergesort(m + 1, r, a);

    int n1 = m - l + 1,n2 = r - m;
    int ar1[n1], ar2[n2];

    for (int i = 0; i < n1; i++) ar1[i] = a[l + i];
    for (int i = 0; i < n2; i++) ar2[i] = a[m + 1 + i];

    int i = 0, j = 0, k = l;
    while(i<n1 and j<n2)
        a[k++] = (ar1[i] < ar2[j])?ar1[i++]:ar2[j++];
    while(i<n1) a[k++] = ar1[i++];
    while(j<n2) a[k++] = ar2[j++];
}

/*
 5 5 4 2 3 1
*/
int main() {
    int n ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i <n ; i++) cin>>a[i];
    mergesort(0,n-1,a);
    for(int i = 0 ; i <n ; i++) cout<<a[i]<<" ";

    cout<<"\n";
}
