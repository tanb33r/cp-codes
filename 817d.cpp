#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb                 emplace_back
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MAX= 2e5+5;
long long i,j,n,s,a[1000009],l[1000009],ll[1000009],r[1000009],rr[1000009];
void solve()
{
	cin>>n;
	for (i=1;i<=n;i++) cin>>a[i];
	for (i=1;i<=n;i++)
	{
		j=i-1;
		while (j>0 && a[j]<a[i]) j=l[j]-1;
		l[i]=j+1;
		j=i-1;
		while (j>0 && a[j]>a[i]) j=ll[j]-1;
		ll[i]=j+1;
	}
	for (i=n;i>=1;i--)
	{
		j=i+1;
		while (j<=n && a[j]<=a[i]) j=r[j]+1;
		r[i]=j-1;
		j=i+1;
		while (j<=n && a[j]>=a[i]) j=rr[j]+1;
		rr[i]=j-1;
	}
	for (i=1;i<=n;i++)
	{
		s+=((r[i]-i+1)*(i-l[i]+1) )*a[i];
		s-=((rr[i]-i+1)*(i-ll[i]+1) )*a[i];
	}
	cout<<s;
}
int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}


