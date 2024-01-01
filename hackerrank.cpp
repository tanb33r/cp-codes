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

int main() {
    string s;
    cin>>s;
    int n = s.size();

    map<char,int>m;
    for(int i = 0 ; i<n; i++) {
        m[s[i]]++;
    }
    int ans = m.size();

    vector<int> divisors;
    for(int j = 1; j*j<=n; j++) {
        if(n%j==0) {
            divisors.push_back(j);
            if(j*j!=n)
                divisors.push_back(n/j);
        }
    }
    sort(all(divisors));
    vout(divisors);
    for(int i = 0; i < divisors.size(); i++) {
        debb(ans);
        if(divisors[i]<ans) continue;

        int p = 1; // possible with this divisor

        for(int j = 0; j<n; j+=divisors[i]) {
            map<char,int>m2;
            string s2 = string(s.begin()+j,s.begin()+j+divisors[i]);
            debb(s2); // ignore
            for(auto x: s2) {
                m2[x]++;
            }

            for(auto x: m2) {

                int koy_vaag = n/divisors[i];

                if(m[x.F]/koy_vaag == x.second)
                    continue;
                else {
                    p = 0;   // substring ratio is not same, so not possible
                    break;
                }
            }
            if(p) {
                cout<<divisors[i]<<'\n';
                return 0;
            }
        }

    }
}

