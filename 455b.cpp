
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
int dp[2][N];
void init() {
    memset(trie, -1, sizeof(trie));
    memset(dp, -1, sizeof(dp));
    sz=1;
}
void addword() {
    string s;
    cin>>s;
    int cur=1;
    f(i,s.size()) {
        if(trie[cur][s[i]-'a']==0)
            trie[cur][s[i]-'a']=++sz;
        cur =  trie[cur][s[i]-'a'];
    }
}


int fun(int root, int t) {
    int memo = 0,c = 0;

    f(j,26)
    if(trie[root][j]) {
        c++;
        if(fun(trie[root][j], t) == 0) memo = 1;
    }

    if(c == 0 and t == 0) memo = 1;
    return memo;
}
void solve() {
    int n, k;
    cin>>n>>k;
    f(i,n) addword();
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
 
