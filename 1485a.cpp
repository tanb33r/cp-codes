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
typedef pair<int,int> pii;
typedef  long long ll;
int intlog(int base, int x) {
    return (int)(log(x) / log(base));
}
void solve() {
    int a, b;
    cin>>a>>b;

//   lst = [];
    int m =1e7;
    int bcount = 0;
    int acopy = a;
    int bplus = b + 10;
    if (a<b)
        d(1);
    else if (a == b)
        d(2);
    else {
//   lst = [];
        while (1) {
            if (b == bplus)
                break;
            else {
                int count = 0;
                if (b == 1) {
                    b += 1;
                    bcount += 1;
                }
                a = acopy;
                while (1) {
//   lst = [];
                    if (a==0)
                        break;
                    else {
                        a = a/b;
                        count ++;
                    }
                }
                b ++;
//   lst = [];
                m =min(m,count+bcount);
                bcount++;
                int gggggg;
            }
        }
        d(m);
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

