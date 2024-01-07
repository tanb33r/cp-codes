#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define ps(x)              cout<<#x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
vector<ll> tree;
//int a[100005], seg[4*100005];

//void build(int i, int l,int r) {
//    if(l==r) {
//        seg[i] = a[l];
//        return;
//    }
//
//    ll mid = (l+r)>>1;
//    build(i*2+1,l,mid);
//    build(i*2+2,mid+1,r);
//    seg[i] = max(seg[i*2+1],seg[i*2+2]);
//}
int n,q;

ll query(int i, int low, int high, int l,int r) {
    if(l<=low and r>=high) {
        return tree[i];
    }
    if(high<l or low>r) return 1e9;

    ll mid = (low+high)>>1;
    ll left = query(i*2,low,mid, l,r);
    ll right = query(i*2+1,mid+1, high, l,r);
    return min(left,right);
}

void update(int i, ll val) {
    i+=n;

    tree[i] = val;
    while(i) {
        i/=2;
        tree[i] = min({tree[2*i],tree[2*i+1],val});
    }
}

void solve() {
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
        int x,l,h;
        cin>>x>>l>>h;
        l--,h--;
        if(x==2)
            cout<<query(1,0,n-1,l,h)<<'\n';
        else update(l,h+1);
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

