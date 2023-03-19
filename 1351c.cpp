#include<bits/stdc++.h>
#include<tr1/unordered_map>
using namespace std;
#define ll long long
#define f first
#define s second
#define fi(i,s,e,inc) for(auto i=s; i<e; i+=inc)
#define fie(i,s,e,inc) for(auto i=s; i<=e; i+=inc)
#define fd(i,s,e,dec) for(auto i=s; i>e; i-=dec)
#define fde(i,s,e,dec) for(auto i=s; i>=e; i-=dec)
#define umap tr1::unordered_map
#define nl cout<<"\n";
#define vt vector
#define pb push_back
#define p(x) cout<<x;
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define rev reverse
#define tc ll t; cin>>t; while(t--)

set<pair<pair<ll,ll>,pair<ll,ll> > > sp;

ll ans=0;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    tc{
        string s;
        cin>>s;
        ll x=0,y=0;
        ans=0;
        sp.clear();
        ll m=0,n=0;
        fi(i,0,s.length(),1) {
            m=x,n=y;

            if(s[i]=='N')                y++;
            else if(s[i]=='S')           y--;
            else if(s[i]=='W')           x--;
            else                         x++;

            ans += sp.find({{m,n},{x,y}})==sp.end() ? 5 : 1;
            sp.insert({{m,n},{x,y}});
            sp.insert({{x,y},{m,n}});
        }
        p(ans) nl
    }
    return 0;
}
