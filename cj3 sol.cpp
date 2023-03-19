#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define in(x) int x; cin>>x;
using namespace std;
array <int, 3 > a[1000][3];
char ans[1000];
void solve() {
    in(n);
    f(i,n)
    cin>>a[i][0]>>a[i][1],a[i][2]=i;
    sort(a,a+n);
    int c=0,j=0,cf=0,jf=1;

    for(int i = 0 ; i< n ; ++i)
        if( a[i][0] >= c)   //c jodi free thake
            c = a[i][1],ans[a[i][2]] = 'C';
        else if( a[i][0] >= j) {  //j jodi free thake
            j = a[i][1],ans[a[i][2]] = 'J';
            }
        else {
            cout <<"IMPOSSIBLE"<<endl;
            return;
            }
    f(i,n)
    cout<<ans[i];
    cout<<endl;
    }
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    in(n);
    ff(i,1,n) {
        cout<<"Case #"<<i<<": ";
        solve();
        }
    }

