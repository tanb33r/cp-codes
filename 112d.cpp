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
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

const int MAX = 1e5+5;
int divcnt(int n) {
    int cnt = 0;
    int j = sqrt(n);
    for (int i = 1; i <= j; i++) {
        if (n % i == 0) {
            if (n / i == i) cnt++;
            else cnt += 2;
        }
    }
    return cnt;
}


void solve() {
    int n;
    cin>>n;
    int ind[100005];
    memset(ind,-1,sizeof ind);
    f(i,n) {
        int x,y;
        cin>>x>>y;
        int ans=0;
        int sq = sqrt(x+1);
        for(int j = 1; j*j<=x; j++) {
            if(x%j==0) {
                ans += ind[j]<i-y;
                ind[j] = i;

                if(j*j==x)continue;
                ans += ind[x/j]<i-y;
                ind[x/j] = i;
            }
        }
//        deb(ans);
//        newl;
    pr(ans);
    }
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
//        hmm(solve());
}
