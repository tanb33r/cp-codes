#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        ll x; cin>>x;
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;

int main() {

    fastio;
    w(t) {
        in(r);
        in(g);
        in(b);
        vi wr(r);
        vi wg(g);
        vi wb(b);
        f(i,r)
        cin>>wr[i];
        f(i,g)
        cin>>wg[i];
        f(i,b)
        cin>>wb[i];

        sort(all(wr));
        sort(all(wg));
        sort(all(wb));
//        vector<ll> v1,v2,v3;
        ll m = LLONG_MAX;
        f(i,r) {
//            cout<<i<<"   i \n";
            int low = lower_bound (wg.begin(), wg.end(), wr[i]) - wg.begin();
            int low2 = lower_bound (wb.begin(), wb.end(), wr[i]) - wb.begin();
//            ll p = min(abs(wr[i] - wg[low - 1]), abs(wr[i] - wg[low]));
//            ll p2 = min(abs(wr[i] - wb[low2 -1 ]), abs(wr[i] - wb[low2]));

//            cout<<low <<"  low\n";
            if(low > 0 )
                if(abs(wr[i] - wg[low - 1]) < abs(wr[i] - wg[low]))
                    low --;
            if(low2 > 0 )
                if(abs(wr[i] - wb[low2 -1 ]) < abs(wr[i] - wb[low2]))
                    low2 --;

            ll a = (wr[i] - wg[low])*(wr[i] - wg[low]) + (wg[low] - wb[low2])*(wg[low] - wb[low2])
                   + (wb[low2] - wr[i])*(wb[low2] - wr[i]);
            if(a<0) continue;
            m = min(a,m);
//            v1.pb((wr[i] + p + p2));
        }
        d(m);

    }


}
/*

1
2 2 3
7 8
6 3
3 1 4

*/
