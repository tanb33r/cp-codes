#include<bits/stdc++.h>
#define f(i,n)          for(ll i=0; i<(n); i++)
#define pr(x)           cout<<(#x)<<endl
#define pb(x)           push_back(x);
#define in(x)           int x; cin>>x;
#define a(t)            ll n; cin>>n; ll a[n]; for(ll i=0;i<n;i++)
#define lln(x)          ll x; cin>>x;
#define w(t)            int t; cin>>t; while(t--)
#define fasto           ios_base::sync_with_stdio(false);cin.tie(NULL);
#define vec(x)          (x).begin(),(x).end()
#define veci            vector<int>
#define vecc            vector<char>
#define sin             string s; cin>>s
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin>>n;
    ll a[n];
    f(i,n) {
        cin>>a[i];
    }
    ll sum =0ll,cnt=0ll,max=0ll,l;
    cin>>l;

    for(int i = 0; i<n; i++) {
        sum = 0ll;
        cnt = 0ll;
        for(int j = i; j<n; j++) {
            sum+=a[j];
            cnt++;
            if(sum>l) {

                break;
            }
            if(cnt>max)
                max=cnt;
        }
// 7 1 1 0 0 0 1 1 6
    }
    cout<<max<<endl;
}


int main() {
    solve();
}
