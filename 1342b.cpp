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

    w(t)
    {
        string s ;
        cin>>s;
        int o=0, z=0;
        f(i,s.size())
        if(s[i]=='0')z++;
        else o++;

        if(o == 0 or z == 0)
        {
            cout<<s<<endl;
            continue;
        }

        f(i,s.size())
        {
            if(i<s.size()-1)
                if(s[i] == '0' and s[i+1] == '0')
                    s.insert(i+1,"1");
            if(i<s.size()-1)
                if(s[i] == '1' and s[i+1] == '1')
                    s.insert(i+1,"0");


        }

        cout<<s<<endl;

    }


}
