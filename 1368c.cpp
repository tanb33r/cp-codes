#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
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
const int mod = 1000000007;

using namespace std;
char a[500][500];


print() {

    f(j,30) {
        f(i,30)
        cout<<a[i][j];
        newl;
    }
}
void solve() {
    in(n);



    int x=0,y=1;
    cout<<n*3 + 4<<"\n";
    cout<<0<<" "<<0<<"\n";
    cout<<1<<" "<<0<<"\n";
    a[0][0] = a[1][0] = '#';

    f(i,n) {
        cout<<x<<" "<<y<<"\n";
        cout<<x+1<<" "<<y<<"\n";
        cout<<x+2<<" "<<y<<"\n";
        x++,y++;
    }
    cout<<x<<" "<<y<<"\n";
    cout<<x+1<<" "<<y<<"\n";




}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
