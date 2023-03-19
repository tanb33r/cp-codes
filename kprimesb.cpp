#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll lcm(ll a, ll b) {
    return (a*b)/gcd(a, b);
}


const int me = 1000025;

int T, N, K;
int primes[10], p[me], sum[me];

int caseS = 1;
void siv() {
    sum[1] = 1;
    for(int i = 2; i < me; i ++)
        if(!p[i])
            for(int j = i + i; j < me; j += i)
                p[j] = 1;
    for(int i = 2; i < me; i ++)
        sum[i] = sum[i - 1] + 1 - p[i];

}

void solve() {

    int N,m;
    cin>>N>>m;
    vector<int> pred(m);

    f(j,m) cin>>pred[j];

    ll res = 0;
    int n = m;
    for(int i = 0; i<(1<<n); i++) {
        int ic = i ;
        ll d = 1, cnt = 0, bit = 0;
        while(ic != 0) {
            if(ic&1) d=lcm(d,pred[bit]),cnt++;
//                    d*=pred[bit],cnt++;
            bit++;
            ic>>=1;
        }

        res += (cnt&1)?(N/d): -(N/d);
    }
//    deb(sum[N]);
    cout<<"Case "<<caseS++<<": "<<N-res+m- sum[N] <<"\n";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    siv();
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

