#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  int                long long
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
bool cmp(pii a, pii b) {
    if(a.F==b.F) return a.S<b.S;
    return   a.F<b.F;

}

void pri(vector<pii> v2) {
    f(i,v2.size()) {
        cout<<v2[i].F<<"\t";
    }
    newl;
    f(i,v2.size()) {
        cout<<abs(v2[i].S)<<"\t";
    }
    newl;
}
void solve() {
    int n;
    cin>>n;
    int a[n];
    int b[n];
    f(i,n) cin>>a[i];
    string s;
    cin>>s;
    vector<pii> v;
    vector<pii> v2;
    vector<int> ans;

    f(i,n) {
        v.pb(make_pair(s[i]-'0',a[i]));
        v2.pb(make_pair(s[i]-'0',-a[i]));
    }
    sort(all(v));
    sort(all(v2));

//    ps(s);
    int one = count(s.begin(), s.end(), '1');
    int k = 0;
//    deb(one);
    while(v.size()) {
        auto i = lower_bound(all(v), make_pair((one > 0),a[k]),cmp);
        auto i2 = lower_bound(all(v2), make_pair((one > 0),-a[k]),cmp);

        int l = (i-v.begin());
        int l2 = (i2-v2.begin());
        deb(a[k]);
        if(abs(a[k] - v[l].S) > abs(a[k] + v2[l2].S)) {
            ans.pb(-v2[l2].S);
            deb(-v2[l2].S);
            int val = -v2[l2].S;
            int b = (one>0);
            auto x = lower_bound(all(v), make_pair(b,val),cmp);
            deb(x->second);
            v2.erase(i2);
            v.erase(x);
        } else {
            deb(v[l].S);
            ans.pb(v[l].S);
            int val = -v[l].S;
            int b = (one>0);
            auto y = lower_bound(all(v2), make_pair(b,val),cmp);
            deb(y->second);
            v.erase(i);
            v2.erase(y);
        }
        pri(v);
        pri(v2);
        ps(ans = );
        vout(ans);
        one--;
        k++;
    }

    vout(ans);
    newl;

}



signed main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}


