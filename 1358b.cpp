#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  in(x)              int x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0)
using namespace std;
int main() {
    fastio;
    w(t) {
        in(n);
        int a[n],x=1,ans = 1;;
        f(i,n)
        cin>>a[i];
        sort(a,a+n);
        f(i,n)
            if(a[i]<i+2) ans+=x,x=1;
            else x++;
        d(ans);
    }
}
