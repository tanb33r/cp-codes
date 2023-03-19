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
int r, c,sn;
        string s;
    while(cin>>r>>c>>sn,r)
    {

//
//        if(r == c and c == sn and sn == 0)
//            break;

        char a[c][r];

        // n0 L1 S2 o3

        int tx,ty,d;
        int stc=0;
        f(i,c)
        f(j,r)
        {
            cin>>a[i][j];
            if(a[i][j] == 'N')      // upre
                tx = i,ty = j,d=0;
            else if(a[i][j] == 'L') // daine
                tx = i,ty = j,d=1;
            else if(a[i][j] == 'S') // niche
                tx = i,ty = j,d=2;
            else if(a[i][j] == 'O') // bame
                tx = i,ty = j,d=3;
        }

//        d(tx);
//        d(ty);
        cin>>s;
        f(i,s.size())
        {
//        d(d);
            if(s[i] == 'D')
                d++, d%=4;
            else if(s[i] == 'E')
                d+=3, d%=4;
            else if(s[i] == 'F')
            {

                if(d==0) // upre
                    if(tx>0 && a[tx-1][ty] != '#')
                        tx--;
                if(d==1) // daine
                    if(ty+1<r && a[tx][ty+1] != '#')
                        ty++;
                if(d==2) // niche
                    if(tx+1<c && a[tx+1][ty] != '#')
                        tx++;
                if(d==3) // bame
                    if(ty>0 && a[tx][ty-1] != '#')
                        ty--;
                if(a[tx][ty] == '*')
                    stc++,a[tx][ty] = '.';

            }
        }
        d(stc);
    }
}
/*

3 3 2
***
*N*
***
FDFDFFF

*/


