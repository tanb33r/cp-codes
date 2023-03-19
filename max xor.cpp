
//456d

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int sz=1,trie[100006][26];
const int N = 1e6 + 5;
void addword() {
    string s;
    cin>>s;
    int cur=1;
    while(n) {
        if(trie[cur][n&1]==0) trie[cur][n&1]=++sz;
        cur =  trie[cur][n&1];
        n>>=1;
    }
}


void solve() {
    int n;
    cin>>n;
    int a[n];
    f(i,n) cin>>a[i];
    int root = sz;
    memset(dp, -1, sizeof dp);
    int a = fun(1, 1), b = fun(1, 0);
    cout<<((a and b or (a and !b and k&1))?"First\n":"Second\n");
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}



