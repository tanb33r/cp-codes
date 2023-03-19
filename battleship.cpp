

#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x
#define all(v) (v).begin(),(v).end()
#define endl '\n'
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;
int z[150][150];

int main()
{

    in(n);
    in(q);

    char a[n][n];

    f(i,n)
    f(j,n)
    cin>>a[i][j];

    int k = q-1;
    int x = 0;

    for(int i=0; i<n; ++i)
        for(int j=0; j<n-k; ++j)
        {
            x=1;

            for(int l=0; l<q; ++l)
                if(a[i][j+l]=='#')
                {
                    x=0;
                    break;
                }

            if(x)
                for(int l=0; l<q; ++l)
                    z[i][j+l]++;

//             daine search
        }

    for(int i=0; i<n-k; ++i)
        for(int j=0; j<n; ++j)
        {
            x=1;

            for(int l=0; l<q; ++l)
                if(a[i+l][j]=='#')
                {
                    x=0;
                    break;
                }
            if(x)
                for(int l=0; l<q; ++l)
                    z[i+l][j]++;

//                    a[i][j] = 'A';
        }

    int mx = 0, y=1;
    x=1;
    for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j)
            if(mx<z[i][j])
                mx = z[i][j],x=i+1,y=j+1;

    cout<<x<<" "<<y<<endl;
}
