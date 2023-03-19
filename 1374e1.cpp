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
using namespace std;

const int INF = 2e9 + 1;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> times[4];
    vector<int> sums[4];
    f(i,n) {
        int t, a, b;
        cin >> t >> a >> b;
        times[a * 2 + b].pb(t);
    }
    f(i,4) {
        sort(all(times[i]));
        sums[i].pb(0);
        for (auto it : times[i])
            sums[i].pb(sums[i].back() + it);
    }

    int ans = INF;
    for (int cnt = 0; cnt < min(k + 1, int(sums[3].size())); ++cnt)
        if (k - cnt < int(sums[1].size()) && k - cnt < int(sums[2].size()))
            ans = min(ans, sums[3][cnt] + sums[1][k - cnt] + sums[2][k - cnt]);


    cout << (ans == INF ? -1 : ans) << endl;
    return 0;
}
