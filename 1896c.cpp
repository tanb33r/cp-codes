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
#define  cerr               if(0)cerr
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

void solve() {
    ll n,x;
    cin>>n>>x;
    vector<int> a(n),a2(n), b(n), b2, b3(n);
    f(i,n) cin>>a[i];
    f(i,n) cin>>b[i];
    a2 = a;
    sort(all(a));
    sort(all(b));


    b2 = b3 = b;
//    reverse(all(b2));
    b2.insert(b2.begin(),b2.back());
    b2.pop_back();

    ll k=0;
    ll k2=0;
    f(i,n) k += a[i]>b[i];
    f(i,n) k2 += a[i]>b2[i];
//    debb(k,k2);
    if(k2<x) vps(NO);

    if(k>x) {
        map<int, vector<int> >m2;
        f(i,n) {
            m2[b[i]].pb(i);
        }
//        vout(b);
        for(int i = n-1; ~i; i--) {
            if(m2[a[i]].size()) {
                debb(a[i],b[i]);
                if(a[i] > b[i])
                    if(m2[a[i]].back() > i) {
                        swap(b[i],b[m2[a[i]].back()]);
                        k--;
                    }
                if(k==x) {
                    b3 = b;
                    break;
                }
                debb(k);
                m2[a[i]].pop_back();
            }
//            vout(b);
        }
        if(k!=x)  vps(NO);
    } else {

        int c = x-k;
        int ii = 0;
        f(i,c) b3[ii++] = b[i];

        ff(i,c,n) b3[ii++] = b[i];
    }
    map<int, vector<int> >m;
    f(i,n)
    m[a[i]].pb(b3[i]);

    vector<int> ans(n);
    f(i,n) {
        ans[i] = m[a2[i]].back();
        m[a2[i]].pop_back();
    }
    ps(YES);
    vout(ans);
    /*
    1
    5 1
    1 2 3 4 5
    1 2 3 4 5
    3 1
    2 4 3
    4 1 2
    */

//    map<vector<int>, int> m;
//

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
