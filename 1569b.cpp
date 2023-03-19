#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n;
    string s ;
    cin>>n>>s;
    char a[n][n];
    bool b[n];
    int cnt = 0;
    f(i,n) {
        cnt+=s[i]=='2';
    }
    if(cnt<3 and cnt>0) {
        ps(NO);
        return;
    }
    f(i,n) {
        f(j,n) {
            b[i] = 0;
            a[i][j] = '=';
            if(i==j)a[i][j] = 'X';
        }
    }


    f(i,n) {
        ff(j,i+1,n) {
            if(s[i]=='1' or s[j]=='1')continue;
            if(s[i]=='2' and s[j]=='2') {
                if(b[i]==0) {
                    a[i][j]='+';
                    b[i]=1;
                } else if(b[i]==1) {
                    a[i][j]='-';
//                break;
                }
            }
        }
    }
    f(i,n) {
        ff(j,i+1,n) {
            if(a[i][j]=='+')a[j][i]='-';
            if(a[i][j]=='-')a[j][i]='+';
        }
    }
    int c[n] {0};
    f(i,n) {
        f(j,n) {
            if(a[i][j]=='+') {
                c[i]=1;
                break;
            }
            if(a[i][j]=='-')c[i] = -1;
        }
    }
    int i1 =*min_element(c,c+n);
//    if(i1==-1) {
//        ps(NO);
//        return;
//    }


    f(i,n) {
        if(s[i]=='2' and c[i]!=1)  {
            ps(NO);
            return;
        }
    }
    ps(YES);

    f(i,n) {
        f(j,n) {
            cout<<a[i][j];
        }
        newl;
    }


}

int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

