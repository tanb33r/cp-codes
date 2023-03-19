/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes 		        cout<<"yes"<<endl
#define  no		            cout<<"no"<<endl
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

int main()
{
    fastio;
    w(t)
    {
        in(n);
        in(k);
        int a[n],b[n];
        f(i,n){ cin>>a[i], b[i] = a[i];}


        sort(b,b+n);
        int ans = 1;
        for(int i=0 ; i <k ; i ++)
        {
            vi p,q;
            for(int j =i; j<n; j+=k)
            {
                p.pb(a[j]);
                q.pb(b[j]);
            }
            sort(all(p));
            if(p != q)
                ans = 0;

        }
        ans?yes:no;
    }
}

