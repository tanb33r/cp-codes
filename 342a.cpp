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
    int n  ;
    cin>>n;

    int a[n];

    vi b(8,0);
    vi c(8,0);
    f(i,n)
    {
        cin>>a[i];
        b[a[i]]++;
        c[a[i]]++;
    }

//    f(i,8)
//    {
//        cout<<b[i]<<" "<<i<<endl ;
//    }
//    cout<<endl;

    b[1] -= b[2];
    b[1] -= b[3];

    if(b[6]>=b[3])
    {
        b[6] -= b[3];
        b[3] = 0;
    }
    if(b[2]>=b[6])
    {
        b[2] -= b[6];
        b[6] = 0;
    }
    if(b[2]>=b[4])
    {
        b[2] -= b[4];
        b[4] = 0;
    }
//    f(i,8)
//    {
//        cout<<b[i]<<" " ;
//    }
//    cout<<endl;
     f(i,8)
     {

         if(b[i] != 0)
         {
             cout<<-1<<endl;
             return 0;
         }
     }

     f(i,n/3)
     {
         cout<<1<<" ";
         if(c[2]-- >0)
             cout<<2<<" ";
         else
             cout<<3<<" ";

         if(c[4]-- >0)
             cout<<4<<" ";
         else
             cout<<6<<" ";
         cout<<endl;
     }

}
