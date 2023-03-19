#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl "\n"
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))
#define vi vector<int>
const int mod 1e9+7;
typedef long long ll;
using namespace std;

int main()
{
    w(t)
    {
        in(n);
        int d=0,flag = 0,a[n];
        f(i,n)
        cin>>a[i];

        f(i,n)
        {

            if(a[i] == 1)
                ff(j,1,5)
                if( i+j < n && a[i+j] == 1)
                {
                    flag =1;
                    break;
                }
                if(flag)
                    break;
        }
        puts((flag)?"NO":"YES");
    }
}


