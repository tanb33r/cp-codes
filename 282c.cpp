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

int main()
{

    string s, s2 ;
    cin>>s>>s2;
    if(s.size()!=s2.size())
    {
        no;
        ret;
    }
    if(s == s2)
    {
        yes;
        ret;
    }
    int f = 1;
    int f2 = 1;
    f(i,s.size())
    {
        if(s[i] == '1')
            f=0;
    }
    f(i,s2.size())
    {
        if(s2[i] == '1')
            f2=0;
    }
    if(f or f2)
    {
        no;
        ret;
    }
    else yes;
    ret;
}

