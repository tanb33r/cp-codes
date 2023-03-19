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
    fastio;
    w(t)
    {
        in(a);
        in(b);
        in(c);

        int ans = 1e9;


        int A = -1, B = -1, C = -1;

        for (int i = 1; i <= 2 * a; ++i)
        {
            for (int j = i; j <= 2 * b; j += i)
            {
                for (int k = 0; k < 2; ++k)
                {
                    int cc = j*(c/j) + k * j;
                    int res = abs(i-a)+abs(j-b)+abs(c-cc);
                    if(ans>res)
                        ans = res,A = i, B = j, C = cc;

                }
            }
        }

        cout << ans << endl << A << " " << B << " " << C << endl;
    }


}
