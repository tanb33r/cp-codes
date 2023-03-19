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
typedef  long long          ll;
using namespace std;
 
int dp(int l, int r, char c) {
	if(l==r)
		return c!=s[l];
	int m=(l+r)/2;
	int ans1=dp(m+1, r, c+1), ans2=dp(l, m, c+1);
	FOR(i, l, m+1)
		ans1+=c!=s[i];
	FOR(i, m+1, r+1)
		ans2+=c!=s[i];
	return min(ans1, ans2);
}
 
void solve() {
	in(n);
	in(s);
	d(dp(0, n-1, 'a'));
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
