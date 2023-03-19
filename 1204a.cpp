#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{
    string s ;
    int x= 0;
    getline(cin,s);
    ff(i,1,s.size())
    if(s[i]=='1')
    {
        x=1;
        break;
    }

    int  n = s.size()/2;
    if(s.size()%2==0)
        x=0;

    cout<<((!x)?n:++n);
    return 0;
}

