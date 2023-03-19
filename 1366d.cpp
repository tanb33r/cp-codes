#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0;I<(vec).size();I++)cout<<vec[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;

const int N=10000007;
int div[N];
void sieve() {

    div[1]=1;
    for(ll i=2; i<N; i+=2)
        div[i]=2;

    for(ll i=3; i<N; i+=2) {
        if(!div[i]) {
            div[i]=i;
            for(int j=i*i; j<N; j+=i)
                if(!div[j])
                    div[j]=i;
        }
    }
}
void solve() {
    sieve();
    in(x);
    vector<intl>a,b;
    while(x--){
        int n;
        cin>>n;
        int mn=divisor[n];
        while(__gcd(n,mn)==mn){
            n/=mn;
        }
        if(n==1){
            a.pb(-1);
            b.pb(-1);
        }
        else{
            a.pb(mn);
            b.pb(n);
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
