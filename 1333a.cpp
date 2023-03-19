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

int main()
{
//  fopen;
//  fastio;
//   f(i,n)
    w(t)
    {
        in(x);
        in(y);
        int a =1 ;
        char c [x][y];
        int b=1;

        f(i,x)
        f(j,y)
        {
            if(a)
                c[i][j] = 'B';
            else
                c[i][j] = 'W';
            a=!a;

        }

        if(x&1 and y&1)
            c[0][1] = 'W';
        else
            c[0][1] = 'B';



        f(i,x)
        {
            f(j,y)
            cout<<c[i][j];
            cout<<endl;
        }


    }
}
/*


5
5 5
7 7
5 4
3 5
4 3
*/
