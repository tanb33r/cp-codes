#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<int> a;
    set<ll>s;
    map<ll,int>mp;
    bool l=1,r=1;

    f(i,n) {
        int x = II;
        mp[x]++;
        if(x<=m and mp[x]==1) a.pb(x);
    }

    sort(all(a));
    int cnt1 = count(all(a),-1);
    int cnt2 = count(all(a),-2);
    ll ans=0;

    int ekbo = -1;
    int skip1 = 0;
    int skip2 = 0;
    int duibo = -1;
    n = a.size();
    f(i,n) {
        if(a[i]>0) ;
        ekbo = a[i];
        if(a[i]+skip1 > cnt1) {
            ekbo = a[i];
            break;
        } else skip1++;
    }

    fr(i,n,0) {
        if(a[i]>0) duibo = a[i];
        if((n-1-a[i])+skip2 > cnt2) {
            duibo = a[i];
            break;
        } else skip2++;
    }

    if(ekbo != -1) {
        ans++;
        int y = ekbo-1;
        if(ekbo - cnt1 > 0 )
            y = cnt1;
        ans+= y;
        ans+= (y-skip1;
    }
    if(duibo != -1) {
        ans++;
        int y = duibo-1;
        if(duibo - cnt2 > 0 )
            y = cnt2;
        ans+= y;
    }
    f(i,n) {

        if(a[i]>0 and a[i]> ekbo and a[i]< duibo)
            s.insert(a[i]) ;
    }
    ans -= ekbo == duibo;
    ans += s.size();
    pr(ans);

}

//}
//f(i,n) {
//    if(l and a[i]==-1)
//        l=0,ans++;
//    if(r and a[i]==-2)
//        r=0,ans++;
//    if(a[i]>0) {
//        if(a[i]==1 and l==1) {
//            l=0,ans++;
//        }
//        if(a[i]==m and r==1) {
//            r=0,ans++;
//        }
//        if(a[i]<=m)
//            s.insert(a[i]);
//    }
//}
//ans+=s.size();
//ans = min(m,ans);
//pr(ans);
//}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
