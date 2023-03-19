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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";

#define  in(x)              int x ; cin>>x
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

#define II                          ({ ll T; cin>>T; T; })
#define dbg(a)                      ({ if(DEBUGGER)cout<<#a<<" = "<<a<<endl; })

typedef long long ll;
typedef vector<ll> vl;

void solve(){
    ll n=II,a[n],b[n],ct[n]={},pos[n]={};
    ll ser[(int)1e5+5]={0},par[(int)1e5+5]={0};
    ff(i,0,n)ct[(b[i]=a[i]=II)]++;
    sort(b,b+n);
    ff(i,0,n){
        pos[b[i]]=i;
    }
    ff(i,0,n){
        if(ct[a[i]]==1){
            ll dif=abs(pos[a[i]]-i);
            if(dif&1){
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(ct[a[i]]){
            ll dif=abs(i-(pos[a[i]]+ser[a[i]]));
            ser[a[i]]++;
            if(dif&1)
                par[a[i]]=(par[a[i]]+1)&1;
        }
    }
    ff(i,0,1e5+5){
        if(par[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(void){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

        int tc;
        cin>>tc;
        while(tc--)
            solve();

    return 0;
}
