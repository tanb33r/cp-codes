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

bool ispalin(string s)
{
    string s2(s);
    reverse(all(s));
    return s == s2;
}

int main()
{

    string s;
    while(cin>>s)
    {
        int n = s.size();
        map<string,int> m;

        int c = 0;
        f(i,n)
        {
            ff(j,1,n-i)
            {
                string s2 = s.substr(i,j);
                if(m[s2] == 0)
                {
                    c += ispalin(s2);
                    m[s2]++;
                }
            }
        }
        cout<<"The string '"<<s<<"' contains "<<c<<" palindromes.\n";
    }
}


