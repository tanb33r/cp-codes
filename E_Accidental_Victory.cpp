#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  print(x)           cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  arrp(a,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" = "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int n,x;
ll p[200005];
check (pii a[],int mid) {
    ll sum = p[mid];
    for(int i =mid+1; i<n; i++)
        if(sum>=a[i].first)
            sum+=a[i].first;
        else return 0;
    return 1;
}



void solve() {
    memset(p,0,sizeof(p));
    cin>>n;
    pii a[n];
    f(i,n) {
        cin>>x;
        a[i] = {x,i};
    }
    sort(a,a+n);
    f(i,n) p[i]+= a[i].first+ (i?p[i-1]:0);
    int  l=0,r=n-1,mid;
    while(l<r) {
        mid = (l+r)/2;
        if(check(a,mid)) r=mid-1;
        else l=mid+1;
    }
    l += !check(a,l);
    vector<int> v;
    ff(i,l,n) v.pb(a[i].second+1);

    sort(all(v));
    print(v.size());
    vprint(v);

}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

