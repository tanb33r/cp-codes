#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ll                 long long
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

void solve() {
    ll n;
    cin>>n;
    int a[n];
    ll ans = 0;
    map<string, int> m;
    f(i,n) {
        string s;
        cin>>s;
        m[s]++;
    }

    vector<string> bls = {"yellow","green","brown","blue","pink","black"};

    int sc = 7;
    while(bls.size() and m[bls.back()]==0)
        sc--,bls.pop_back();

    if(bls.size()) ans += (sc+1)*m["red"];

    while(bls.size()) {
        if(m[bls.back()])
            ans+=sc;
        sc--,bls.pop_back();
    }

    if(ans == 0) ans = 1;

    cout<<(ans)<<'\n';
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

