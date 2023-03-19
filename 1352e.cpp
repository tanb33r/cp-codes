#include <bits/stdc++.h>
#define  f(i,n)             for(unsigned short int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%u",&i)
#define  pf(i)              printf("%d",i)
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
#define  all(v)             v.begin(),v.end()
#define  vprint(vec)        for(int i=0; i<vec.size(); i++)cout << vec[i] << " ";cout<<endl
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int main() {

    fastio;
    w(t) {
        in(n);
        vector<int> a(n);
        vector<int> cnt(n + 1);
        int ans = 0;
        for (auto &it : a) {
            cin >> it;
            ++cnt[it];
        }
        for (int l = 0; l < n; ++l) {
            int sum = 0;
            for (int r = l; r < n; ++r) {
                sum += a[r];
                if (l == r) continue;
                if (sum <= n) {
                    ans += cnt[sum];
                    cnt[sum] = 0;
                }
            }
        }
        cout << ans << endl;
    }
}
