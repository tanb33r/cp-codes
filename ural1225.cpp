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

#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll ans[50];
    ans[1] = 2, ans[2] = 2,ans[3] = 4;

    int n
    ff(i,4,50) {
        dp(int col,int i,int prevcol) {
            if(col==1)//white{
                ans+=dp(2,i+1);
            if(i+2<=n) ans+=dp(3,i+1);
        }
        if(col==2)//white{
            ans+=dp(1,i+1);
        if(i+2<=n) ans+=dp(3,i+1);
    }
    if(col==2) { //white{
        if(prevcol==1)  ans+=dp(2,i+1);
        else  ans+=dp(1,i+1);
    }

}








ff(i,4,50)
ans[i] = ans[i-1]+ans[i-2];
ll n;    //ll n;
while(cin>>n) {
    pr(ans[n]);
}
}
