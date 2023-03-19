#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x;
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;

int main() {
//    fastio;
    w(t) {

        in(n);
        int a[n];
        map<int, int >m;

        int ma = 0 ;
        f(i,n) {

            cin>>a[i];
            m[a[i]]++;
            ma = max(ma,m[a[i]]);
        }


        int dis = m.size()-1;

        if(n == 1)
            cout<<0<<endl;

        else if(ma-dis >= 2)
            cout<<dis+1<<endl;
        else if(dis <= ma)
            cout<<dis<<endl;
        else
            cout<<ma<<endl;
        m.clear();


    }


}

