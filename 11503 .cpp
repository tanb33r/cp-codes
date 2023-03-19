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
typedef pair<string, string> pairs;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    w(t)
    {
        map<string, int > mm ;
//        map<pairs, int > mm;
//
        w(n)
        {
            string s, s2;
            cin>>s>>s2;
            mm[s]++;
            mm[s2]++;
//            pairs p;
//            p = make_pair(s,s2);
//            mm[p] = 1;
//            p = make_pair(s2,s);
//            mm[p] = 1;
            int sum = 0;

            d(mm.size());
        }

    }
}
