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
    w(t)
    {
        in(n);
        string s[n];
        vector<pair <string, int > > p;
        map<string, int > m ;

        f(i,n)
        {
            cin>>s[i];
            m[s[i]]++;
            p.push_back(make_pair(s[i],i));
        }

        d(n-m.size());

        while(1)
        {
            int x  = 0;
            f(i,n-1)
            {
                sort(all(p));

                if(p[i].first == p[i+1].first)
                {
                    do
                    {
                        p[i].first[0]++;
                        x++;
                        if(p[i].first[0]>'9')
                            p[i].first[0] = '0';
                    }
                    while(m[p[i].first]!=0);
                }
            }
            if(x == 0) break;

        }

        f(i,n)
        s[p[i].second] = p[i].first;

        f(i,n)
        d(s[i]);
    }
}
/*


1
4
9999
9999
0000
0000
*/
