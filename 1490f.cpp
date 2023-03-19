#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  print(x)           cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    int n;
    cin>>n;
    int a[n];
    map<int, int > m;
    f(i,n) {
        cin>>a[i];
        m[a[i]]++;
    }
    vector<int>v;
    for(auto it : m) {
        v.pb(it.second);
    }
    sort(all(v));
    int p[n] {};

    f(i,v.size()) p[i]+= v[i] + (i?p[i-1]:0);

    int ans = 1e9;
    deb(v.size());


    f(i,v.size()) {
        int x = 0;
        if(i) x+=p[i-1];
        deb(x);
        x+= p[v.size()-1] - p[i] - (v.size()-1-i)*v[i];
        ans = min(ans,x);
    }
    print(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

