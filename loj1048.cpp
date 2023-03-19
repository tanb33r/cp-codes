#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
int tc = 1;

int ara[nmax];
int n,k;

bool isPossible(int d) {
    int sum = 0;
    int cnt = 0;

    for(int i=1; i<=n; i++) {
        if(d<ara[i]) return 0;
        if(sum+ara[i]<=d) sum += ara[i];
        else cnt++, sum = ara[i];
    }

//    cout<<d<<" : "<<cnt<<endl;
    cnt++;

    return cnt<=k;
}

void printAns(int d) {
    int sum = 0;
    int cnt = 0;
    for(int i=1; i<=n; i++) {
        if(sum+ara[i]<=d)
            sum += ara[i];
        else {
            cout<<sum<<endl;
            cnt++;
            sum = ara[i];
        }

        if(n-i+1==k-cnt) { /** remaining num. of elements including this == the extra i need **/
            cout<<sum<<endl;
            for(int j=i+1; j<=n; j++)
                cout<<ara[j]<<endl;
            break;
        }
    }
}
void solve() {
    int n,k;
    cin>>n>>k;
    int a[n+5];
    int lo = 0, hi = 0, mid = 0;
    n++, k++;
    f(i,n) {
        cin>>a[i];
        lo = max(lo,ara[i]);
        hi += ara[i];
    }

    int ans = lo;

    while(lo<hi) {
        mid = (lo+hi)/2;
        if(isPossible(mid)) hi = mid, ans = mid;
        else lo = mid+1;
    }

//        cout<<"Case "<<q<<": "<<ans<<endl;

    printAns(ans);

}

cout<<"Case "<<tc++<<": "<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
//        hmm(solve());
}
