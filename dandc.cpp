#include <bits/stdc++.h>
using namespace std;

int mcs(int a[], int l, int m, int r) {
    int ls = INT_MIN,rs = INT_MIN;
    for (int sum = 0, i = m ; i >= l ; i--)  ls = max(ls,sum += a[i]);
    for (int sum = 0, i = m+1; i <= r; i++)  rs = max(rs,sum += a[i]);
    return max(ls + rs,max(ls, rs));
}

int mss(int a[], int l, int r) {
    if (l == r) return a[l];
    int m = (l + r)/2;
    return max(mss(a, l, m),max(mss(a, m+1, r),mcs(a, l, m, r)));
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i<n ; i++) cin>>a[i];
    cout<<mss(a, 0, n-1)<<endl;
}
