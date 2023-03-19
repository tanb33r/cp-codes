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
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vi v[4];
    in(n);
    int x,y;
    f(i,5*n)
    {
        cin>>x>>y;

        if(x&1 && y&1)
            v[1].push_back(i+1);

        else if(!(x&1) && !(y&1))
            v[0].push_back(i+1);

        else if((x&1) && !(y&1))
            v[2].push_back(i+1);

        else if(!(x&1) && (y&1))
            v[3].push_back(i+1);
    }

    cout<<"OK\n";
    int j =0;
    while(j<4)
    {
        if(v[j].size() >= n)
        {
            f(i,n)
            cout<<v[j][i]<<" ";
            break;
        }
        j++;
    }
}



