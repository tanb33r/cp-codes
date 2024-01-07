#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define ll long long
using namespace std;
vector<ll> tree;

ll seg(int i, int low, int high, int l, int r) {
    if(l <=low and high <= r)
        return tree[i];
    if(high < l || r < low)
        return 1e9;
    int mid = (low + high)>>1;
    return min(seg(2*i, low, mid, l, r)
           ,seg(2*i+1, mid + 1, high, l, r));
}
void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    f(i,n)cin>>a[i];

    while(__builtin_popcount(n)!=1) {
        a.push_back(1e9);
        n++;
    }
    tree.resize(2*n);
    f(i,n)tree[n+i] = a[i];
    for(int i = n-1; i>=0; i--)
        tree[i] = min(tree[2*i],tree[2*i+1]);
    f(i,q) {
        int l,h;
        cin>>l>>h;
        l--,h--;
        cout<<seg(1,0,n-1,l,h)<<'\n';
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

