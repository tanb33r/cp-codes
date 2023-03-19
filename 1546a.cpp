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
#define  in(x)              int x ; cin>>x
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,m ;
    cin>>n;
    int a[n];
    int b[n];
    int suma=0;
    int sumb=0;
    f(i,n) {
        cin>>a[i];
        suma+=a[i];
    }
    bool k = 1;
    f(i,n) {
        cin>>b[i];
        sumb+=b[i];
        if(a[i]!=b[i]) k = 0;
    }
    vector<int>iarr,jarr;
    int  flag = 0;

    if (suma != sumb) {
        pr(-1);
        return;
    }
    if (k) {
        pr(0);
        return;
    }

    int i = 0;
    int op = 0;
    int c[n]{0};
    while(i < n) {
        if (a[i] > b[i]) {
            flag = 1;
            op += abs(a[i]-b[i]);

            int j = 0;
            while(j < n) {
                if (a[j] < b[j]) {
                    a[j] ++;
                    m += 1;
                    iarr.push_back(i+1);
                    jarr.push_back(j+1);
                    break;
                }

                j += 1;
                if (flag == 1) {
                    flag = 0;
                    i = 0;
                } else i += 1;
                bool k = 1;
                f(i,n) {
                    if(a[i]!=b[i]) k = 0;
                }
                if (k) {
                    pr(m);
                    f(i,m)
                    cout<<iarr[i]<<" "<<jarr[i]<<"\n";
                } else
                    pr(-1);

            }
        }
    }
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

