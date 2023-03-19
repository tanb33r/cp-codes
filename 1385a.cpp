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

typedef  long long          ll;
using namespace std;

void solve() {
        int a[3];
        map<int,int> m;
    f(i,3) {
        cin>>a[i];
        m[a[i]]++;
    }
    if( m.size()==1)
        cout<<"YES\n"<<a[0]<<" "<<a[0]<<" "<<a[0]<<"\n";

    else if( m.size()==2) {
        if(a[0] == a[1] and a[0]>a[2])
            cout<<"YES\n"<<a[0]<<" "<<a[2]<<" "<<a[2]<<"\n";
        else if(a[0] == a[2] and a[0]>a[1])
            cout<<"YES\n"<<a[1]<<" "<<a[0]<<" "<<a[1]<<"\n";
        else if(a[2] == a[1] and a[1]>a[0])
            cout<<"YES\n"<<a[0]<<" "<<a[0]<<" "<<a[2]<<"\n";

        else  cout<<"NO\n";
    } else cout<<"NO\n";
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
