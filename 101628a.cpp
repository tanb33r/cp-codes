
#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x); s
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
int mod=1e9+7;
ll dp[100005][13];
void solve() {
    string s1,s2;
    cin>>s1>>s2;
    dp[0][0] =1;
    for(int i =1; i<=s1.size(); i++) {
        dp[i][0] = dp[i][0]+dp[i-1][0];
        for(int j=1; j<=s2.size(); j++) {
            dp[i][j]=dp[i-1][j];
            if(s1[i-1]==s2[j-1]) dp[i][j]=(dp[i][j]+dp[i-1][j-1])%mod;
        }

    }

    /*
qqqaaabbbcccfffrrr
qqabcfr



    */
//    cout<<"\t";
//    for(int i =0; i<=s2.size(); i++) {
//        cout<<s2[i]<<"\t";
//    }
//    newl;
//    for(int i =1; i<=s1.size(); i++) {
//        cout<<s1[i-1];
//        for(int j=1; j<=s2.size(); j++) {
//            cout<<"\t"<<dp[i][j];
//        }
//
//        newl;
//    }

    d(dp[s1.size()][s2.size()]);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

