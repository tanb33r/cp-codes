#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;

void solve() {
    in(n);
    int ans[n]= {0},C;
    int b[n] = {0};
    string c;
    vector<int> z[2];
    cin>>c;
    f(i,n)
    z[c[i]-'0'].pb(i);

    int x = 1,cnt = 0;
    int L = n;
    int flag = 1;
    while(cnt<n and z[0].size()>0 and z[1].size()>0 and flag) {
        C = z[1].back()>z[0].back()?1:0;
        while(cnt<n and z[0].size()>0 and z[1].size()>0 and z[C].back() < L and flag) {
            auto lo = lower_bound(all(z[C]),z[C^1].back()) - z[C].begin()-1;
            while(lo>0 and b[lo])lo--;
            b[z[C][lo]] = 1;
            ans[b[z[C][lo]] = x;
            if(z[C].size() == 1) flag =0;
            z[C].pop_back();
            C^=1;
            cnt++;
        }
        deb(z[1].size());
        x++;
        deb(x);

    }


    deb(C);
    C = z[0].size()?0:1;
    if(z[0].size()>0) {
        z[0].pop_back();
        ans[z[0].back()] = x++;
    }
    cout<<x-1<<endl;
    f(i,n)
    cout<<ans[i]<<" ";
    newl;

}

int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
