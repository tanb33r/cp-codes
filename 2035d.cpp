#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
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
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(VA_ARGS)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const ll mod = 1e9+7;
const int N = 1e5+7;
ll tree[4000005];
ll tt[10000005];
ll tcnt[200005];
ll scnt[200005];
ll ans[200005];
ll a[200005];

pii fnc(ll src) {
    ll ans =0;
    while(src%2==0) {
        ans++;
        src/=2;
    }
    return {ans, src};
}

void build(int node, int start, int end) {
    if (start == end) {
        tree[node] = a[start];
    } else {
        int mid = (start + end) / 2;
        int left_child = 2 * node + 1;
        int right_child = 2 * node + 2;
        build(left_child, start, mid);
        build(right_child, mid + 1, end);
        tree[node] = max(tree[left_child], tree[right_child]);
    }
}

void update(int node, int start, int end, int idx, int value) {
    if (start == end) {
        a[idx] = value;
        tree[node] = value;
    } else {
        int mid = (start + end) / 2;
        int left_child = 2 * node + 1;
        int right_child = 2 * node + 2;
        if (start <= idx && idx <= mid) {
            update(left_child, start, mid, idx, value);
        } else {
            update(right_child, mid + 1, end, idx, value);
        }
        tree[node] = max(tree[left_child], tree[right_child]);
    }
}

int query(int node, int start, int end, int L, int R, int x) {
    if (start > R || end < L) {
        return -1;
    }
    if (start == end) {
        return tree[node] > x ? start : -1;
    }
    int mid = (start + end) / 2;
    int right_child = 2 * node + 2;
    int left_child = 2 * node + 1;

    int right_result = query(right_child, mid + 1, end, L, R, x);
    if (right_result != -1) {
        return right_result;
    }
    return query(left_child, start, mid, L, R, x);
}

void solve() {
    ll n;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        pii aa = fnc(a[i]);
        tcnt[i]= tcnt[i-1]+aa.F;
        scnt[i]=scnt[i-1]+aa.S;
    }

    build(1,1,n);

    ll sum=0,two=0, mx=0;

    for(int i=1; i<=n; i++) {
        ll val = a[i];
        for(int j=0; j<32; j++) {
            ll b = query(1,1,n,1,i,val);

            if(b==-1) b=0;
            two=tcnt[i-1]-tcnt[b];
            sum=scnt[i-1]-scnt[b];

            if(two>=30 || b == 0) {
                b=0;
                two=tcnt[i-1]-tcnt[b];
                sum=scnt[i-1]-scnt[b];
                ans[i]=(a[i]*tt[two])%mod+ans[b]+sum;
                ans[i]%=mod;
                break;
            }

            ans[i]=(a[i]*tt[two])%mod+ans[b]+sum;
            ans[i]%=mod;
            if(val==a[i]*tt[two]) break;
            else val = a[i]*tt[two];
        }

        pii aa= fnc(a[i]);
        if(a[i]%2 == 0) update(1,1,n,i,aa.S);

        cout<<ans[i]<<" ";
    }
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;

    tt[0]=1;

    for(int i=1; i<=10000000; i++) {
        tt[i]=(tt[i-1]*2)%mod;
    }

    cin>>t;
    while(t--)
        solve();
}
