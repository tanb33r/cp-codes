#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define ll long long
using namespace std;
vector<ll> tree;

ll seg(int node, int low, int high, int q_low, int q_high) {
    if(q_low <=low and high <= q_high)
        return tree[node];
    if(high < q_low || q_high < low)
        return 0;
    int last_in_left = (low + high)>>1;
    return seg(2*node, low, last_in_left, q_low, q_high)
           + seg(2*node+1, last_in_left + 1, high, q_low, q_high);
}
void solve() {
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    f(i,n)cin>>a[i];

    while(__builtin_popcount(n)!=1) {
        a.push_back(0);
        n++;
    }
    tree.resize(2*n);
    f(i,n)tree[n+i] = a[i];
    for(int i = n-1; i>=0; i--)
        tree[i] = tree[2*i]+tree[2*i+1];
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


