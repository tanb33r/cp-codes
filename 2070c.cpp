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
#define pii                pair<long long,long long>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(VA_ARGS)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out()
{
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;

ll arr[300005];
//ll crr[200005];
//ll brr[200005];
ll n,m,k;
string s;
ll fnc(ll val)
{
    ll i,j;

    for(i=0,j=0; i<n; i++)
    {
        if(s[i]=='B'&& arr[i]>val)
        {
            while(!(s[i]=='R'&& arr[i]>val))
            {
                i++;
                if(i==n) break;
            }
            j++;
        }
    }
    if(j>m) return 0;
    return 1;
}

ll bs(ll l,ll r)
{
    ll i,j,mid;

    while(r-l>=3)
    {
        mid=(r+l)/2;
        i=fnc(mid);
        if(i==1)
        {
            r=mid;
        }
        else l=mid;
    }

    while(l<=r)
    {
        i=fnc(l);
        if(i==1) return l;
        l++;
    }
    return r;
}

void solve()
{
    ll l,r,i,j,a,b,c;

    cin>>n>>m;
    cin>>s;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    ll ans = bs(0,1000000000);
    cout<<ans<<'\n';
//    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
