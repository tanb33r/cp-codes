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

void printBinary(int num) {
    int numOfBits = 32; // Number of bits in an integer

    for (int i = numOfBits - 1; i >= 0; --i) {
        printf("%d", (num & (1 << i)) ? 1 : 0);
    }

    printf("\n");
}


std::string intToBinaryString(int num) {
    return std::bitset<31>(num).to_string();
}

int binaryStringToInt(const std::string &binaryString) {
    return std::bitset<31>(binaryString).to_ulong();
}

void solve() {
    ll n;
    cin>>n;
    int a[n];
    ll ans=0;
    map<int,int>m;
    f(i,n) {
        cin>>a[i];
        b[i] = a[i];
        m[a[i]]++;
        string bs = intToBinaryString(a[i]);
        string rbs = bs;
        for(char& c: rbs) {
            c^=1;
        }
        int rev = binaryStringToInt(rbs);
        if(m[rev]>0) {
            m[rev]--;
            m[a[i]]--;
            c++;
        }
    }
    pr(n-c);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
