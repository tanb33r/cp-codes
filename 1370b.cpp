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

bool solve() {
    in(n);
    in(k);
    int a[n],flag = 0;
    f(i,n) {
        cin>>a[i];
        if(a[i]<k) a[i] = 0;
        else if(a[i]>k) a[i] = 2;
        else a[i] = 1,flag = 1;
    }

    if(!flag)return 0;
	if(n==1)return 1;
	for(int i=0;i<n;++i)
		for(int j=i+1;j<n && j-i<=2;++j)
			if(a[i] && a[j])return 1;
	return 0;

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)cout<<(solve()?"yes\n":"no\n");

}
