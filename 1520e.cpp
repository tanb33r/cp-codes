#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    ll n,cnt=0;
    string s;
    cin>>n;
    char c;
    bool b=0;
    f(i,n) {
        cin>>c;
        if(b==0 and c == '.') continue;
        else {
            b=1;
            s+=c;
        }
    }
    while(s.back()=='.') s.pop_back();
    b=0;
    f(i,s.size()) {
        if(s[i]=='.')
            b=1;
    }
    if(b==0) {
        pr(0);
        return;
    }
    ll k =0;
    n = s.size()-1;
    vector<ll> pre,po;
    ll m=0;
    while(s[n]=='*')n--;
    while(s[m]=='*')m++;
    ll h = 0;
    f(i,s.size()) {
        if(s[i]=='*') k++;
        else pre.pb(k);
    }
    k =0;
    for(ll i = s.size()-1; ~i; i--) {
        if(s[i]=='*') k++;
        else po.pb(k);
    }
    reverse(all(po));
    vector<ll> pres(pre.size()),pos(po.size());

    f(i,pre.size()) {
        if(!i) pres[i]= pre[i];
        else pres[i]=pres[i-1]+pre[i];
    }
    for(ll i = po.size()-1; ~i; i--) {
        if(i == po.size()-1) pos[i]= po[i];
        else pos[i]=pos[i+1]+po[i];
    }

    /*
    //    f(i,pre.size()) {
    //        cout<<pre[i]<<"\t";
    //    }
    //    newl;
    //    for(ll i = po.size()-1; ~i; i--) {
    //        cout<<po[i]<<"\t";
    //    }
    //    newl;
    //    f(i,pres.size()) {
    //        cout<<pres[i]<<"\t";
    //    }
    //    newl;
    //
    //    f(i,pos.size()) {
    //        cout<<pos[i]<<"\t";
    //    }
    //    newl;

    */


    ll ans = min(pres.back(),pos[0]);
    f(i,pos.size()-1)
    ans = min(ans,pres[i]+pos[i+1]);
    pr(ans);


}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
