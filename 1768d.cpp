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
const int mod = 1e9+7;
const int N = 1e5+7;
int minSwaps(int arr[], int n) {
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++) {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos, arrPos + n);
    vector<bool> vis(n, false);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (vis[i] || arrPos[i].second == i)
            continue;
        int cycle_size = 0;
        int j = i;
        while (!vis[j]) {
            vis[j] = 1;
            j = arrPos[j].second;
            cycle_size++;
        }
        if (cycle_size > 0) {
            ans += (cycle_size - 1);
        }
    }
    return ans;
}

void solve() {
    ll n,inv=0ll;
    int cnt =0;
    cin>>n;
    int a[n];
    int b[n];
    vector<int>v;
    f(i,n) {
        cin>>a[i];
        b[i] = a[i];
//        v.pb(a[i]);
//        if(i!=a[i])
//            cnt++;
//        inv+=(abs(a[i]-i));
    }
    ll ans = 0ll;
    if(is_sorted(a,a+n)) vps(1);
    ans+=minSwaps(a,n);
    bool flag = 1 ;
    f(i,n) {
//        if(!i) continue;
//        debb(a[i],i);
        if(a[i]==i+2) {
            flag = 0;
            //ps(asd);
            ans--;
            break;
        }if(a[i]==i) {
            flag = 0;
            //ps(asd);
            ans--;
            break;
        }
    }
    pr(ans+flag);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
