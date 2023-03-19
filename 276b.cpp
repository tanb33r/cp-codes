
/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes 		    cout<<"YES"<<endl
#define  no		    cout<<"NO"<<endl
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
typedef  long long          ll;

const int mod = 1000000007;
using namespace std;

int main()
{

    string s ;
    cin>>s;
    vi a(30,0);

    f(i,s.size())
    a[s[i]-'a']++;
    int o = 0;

    f(i,26)
    if(a[i]&1)
        o++;
    if(o==0)
    {
        cout<<"First\n";
        return 0;
    }
    cout<<((o&1)?"First\n":"Second\n");
}
