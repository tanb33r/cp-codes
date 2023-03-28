#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

typedef pair<int,int> pii;
const int MAX = 2e5+5;
ll SUM(int l) {
    return (l*(l+1))/2 ;
}
vector<int> findSubset(const vector<int> &arr, ll required_sum) {
    for(ll i = (ll)arr.size())-1;
    i < (1 << (ll)arr.size());
    i++) {
        vector<int> current_subset;
        ll curr_sum = 0;
        for(int j = 0; j < arr.size(); j++) {
            if( (i & (1 << j))) {
                current_subset.push_back(arr[j]);
                curr_sum += arr[j];
                if(curr_sum > required_sum)
                    break;

            }
        }
        if(curr_sum == required_sum)
            return current_subset;
    }
}

void solve() {
    int n,k;
    cin>>n>>k;
    //    while(1) {
//        int nmbr = (x<<(j+1));
//        if(nmbr>k) break;
//        j++;
//    }
    vector<int> a;

//    debb(n);
    f(i,n) {
        int x = SUM(i+1);
        debb(x);
        a.pb(SUM(i+1));
    }
//    vout(a);
    vector<int> b;
    int sz = a.size();
    int k2 = k;
    for(int i = sz-1; i>=0; i--) {
        if(k>=a[i]) {
            b.pb(i+1);
            i++;
            k-=a[i];
        }
    }

    vector<int> ind;
    int x = 1;
    f(i,a.size()) {
        f(j,b.size()) {
            if(b[j]==a[i])
                ind.pb(x/2 +1);
        }
        x++;
    }
//    f(i,ind.size())
//    vout(a);
//    vout(b);
//    vout(ind);
    int ans[n];
    f(i,n) ans[i]= -1000;
    int j = 0;

    f(i,ind.size()) {
        int x = 0 ;
        while(x<ind[i]) {
            ans[x]=5;
            x++;

        }
        x++;
    }
    f(i,n) cout<<ans[i]<<' ' ;
    cout<<'\n';

}

int main() {
//    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


