#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  ps(x)              cout<<(#x)<<endl
#define  yes                cout<<"YES"<<endl
#define  no                 cout<<"NO"<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0; I<(vec).size(); I++)cout << vec[I] << " ";cout<<endl
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int main() {

//    fastio;
    w(t) {
        string s ;
        cin>>s;

        vi v[4];
        int ans = INT_MAX ;
        f(i,s.size())
        v[s[i]-'0'].pb(i);


        f(i,4) {
            vprint(v[i]);
        }
        f(i,s.size()) {
            if(s[i] == '1') {
                int l = lower_bound(all(v[2]), i) - v[2].begin();
                int l2 = lower_bound(all(v[3]), i) - v[3].begin();
                vi::iterator *it = v[2].lower_bound(i);
                deb(i);
                deb(s[i]);
                deb(l);
                deb(l2);
                ans = min(ans,max(l,l2)-i);
            }

            if(s[i] == '2') {
                int l = lower_bound(all(v[1]), i) - v[1].begin();
                int l2 = lower_bound(all(v[3]), i) - v[3].begin();
                ans = min(ans,max(l,l2)-i);
            }
            if(s[i] == '3') {
                int l = lower_bound(all(v[2]), i) - v[2].begin();
                int l2 = lower_bound(all(v[1]), i) - v[1].begin();
                ans = min(ans,max(l,l2)-i);
            }
        }
        d(ans);
    }
}


