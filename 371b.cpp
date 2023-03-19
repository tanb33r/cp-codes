/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes 		        cout<<"YES"<<endl
#define  no		            cout<<"NO"<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
typedef  long long          ll;

const int mod = 1000000007;
using namespace std;

int main() {

    in(a);
    in(b);
    int p[] = {2,3,5};
    int aa[3] = {0,0,0};
    int bb[3] = {0,0,0};
    f(i,3)
    {
        while(a%p[i]==0)
            aa[i]++,a-=((p[i]-1)*(a/p[i]));
        while(b%p[i]==0)
            bb[i]++,b-=((p[i]-1)*(b/p[i]));
    }
    if(a!=b)
    {
        d(-1);
        ret;
    }

    int ans = 0 ;

    f(i,3)
    ans += abs(aa[i]-bb[i]);

    d(ans);

}


