#include <bits/stdc++.h>
//#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl "\n"
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;

const int N=444;
double f[N][N],ans;
int n,k,i,j;
int main()
{
    scanf("%d%d",&n,&k);
    for(i=1; i<=n; i++)
        f[0][i]=i;



    for(i=1; i<=k; i++)
        for(j=0; j<=n; j++)
        {
            if(j)
                f[i][j]=(f[i-1][j]+f[i-1][j-1])/2;
            if(j<n)
                f[i][j]=max(f[i][j],(f[i-1][j]+f[i-1][j+1])/2);
        }

    printf("%.10f",f[k][0]);
}
