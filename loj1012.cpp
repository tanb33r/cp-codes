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
#define fopen freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define fastio ios::sync_with_stdio(0),cin.tie(0)
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;
bool v[21][21]= {0};
char a[21][21] ;
int r, c,cc;


int main()
{
//  fopen;
//    fastio;
    in(n);
    f(i,n)
    {
        cin>>c>>r;
        int tx,ty;
        cc = 1;
        f(i,r)
        f(j,c)
        {
            cin>>a[i][j];
            if(a[i][j] == '@')
                tx = i,ty = j;

        }

        int b = 1;
        int t = r*c;
        while(t--)
        {
            f(i,r)
            f(j,c)
            {

                if(i>0 && a[i][j] == '.')
                    if(a[i-1][j] == '@')
                        cc++,a[i][j]  = '@';

                if(i<r-1 && a[i][j] == '.')
                    if(a[i+1][j] == '@')
                        cc++,a[i][j] = '@';
                if(j>0 && a[i][j] == '.')
                    if(a[i][j-1] == '@')
                        cc++,a[i][j] = '@';
                if(j<c-1 && a[i][j] == '.')
                    if(a[i][j+1] == '@')
                        cc++,a[i][j] = '@';

            }
        }
//        f(i,r)
//        {
//            f(j,c)cout<<a[i][j];
//            cout<<endl;
//        }
        printf("Case %d: ",i+1);
        cout<<cc<<endl;
    }
}


/*
1
4 4
....
.@..
....
....
*/
