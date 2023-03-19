#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  w(t)               int t; cin>>t; while(t--)
using namespace std;
int main() {
    w(t) {
        int n,d,a,m=0,ans=0;
        cin>>n>>d;
        f(i,n) {
            cin>>a;
            if (a==d) ans = 1;
            m = max(m,a);
        }
        ans = (ans)?1:max(ceil((d*1.0)/m),2);
        cout<<ans<<endl;
    }
}
