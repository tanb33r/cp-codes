#include <bits/stdc++.h>

typedef  long long int ll;
#define test ll t;cin>>t;while(t--)
#define input1(n) ll n;cin>>n;
#define input2(a,b) ll a,b;cin>>a,b;
#define input3(a,b,c) ll a,b,c;cin>>a>>b>>c;
#define input4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d;

#define md  10000007;
#define fr(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=1;i<=n;i++)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

ll r, nb,ns,nc;
ll pb,ps,pc;
ll fb,fc,fs;
ll b=0,s=0,c=0;
ll price(ll x) {
    fb = max(x*b - nb, (ll)0);
    fc = max(x*c - nc, (ll)0);
    fs = max(x*s - ns, (ll)0);

    ll p = fb*pb + fc*pc + fs*ps;
    return p;
}
int main () {
    fast;
    string str;
    cin>>str;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    b=s=c=0;
    ll q=str.length();
    fr(i,q) {
        if(str[i]=='B')
            b++;
        else if(str[i]=='S')
            s++;
        else
            c++;
    }
    ll low=0,high=r+1000;

    ll ans=0;
    ll mid=0;
    while(low<=high) {
        mid=(low+high)/2;
        ll z=price(mid);
        if(z==r) {
            cout<<mid<<"\n";
            return 0;
        }
        if(z>r)
            high=mid-1;

        if(z<r) {
            ans=mid;
            low=mid+1;
        }
    }

    cout<<ans<<"\n";
    return 0;
}
