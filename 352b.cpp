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
int main() {
    in(n);
    int a[n][2],v[100005];
    map <int, int > m,mm,ans,b;
    vector<pair <int, int> > p;
    f(i,n) {
        sf(a[i][0]);
        m[a[i][0]]++;
        if(m[a[i][0]] == 2)
            ans[a[i][0]] = i  - v[a[i][0]];
        else if(m[a[i][0]] > 2)
            if( ans[a[i][0]] != i  - v[a[i][0]])
                ans[a[i][0]] = -1;
        v[a[i][0]] = i;
    }
    int n2 = 0;
    f(i,n) {
        mm[a[i][0]]++;
        if(m[a[i][0]] == 1)  {
            if(m[a[i][0]] == 1) {
                a[i][1] = 0;
                p.pb(make_pair(a[i][0],0));
                b[a[i][0]] ++;
                if(b[a[i][0]] == 1)
                    n2++;
            }
            else  {
                int flag  = 0;
                int d = v[a[i][0]][1] - v[a[i][0]][0];
                f(j,v[a[i][0]].size()-1) {
                    if(v[a[i][0]][j+1] - v[a[i][0]][j] != d) {
                        flag = 1;
                        break;
                    }
                }
                if(flag) {
                    a[i][1] = -1, p.pb(make_pair(a[i][0],-1));
                } else {
                    a[i][1] = d, p.pb(make_pair(a[i][0],d));
                    b[a[i][0]] ++;
                    if(b[a[i][0]] == 1)
                        n2++;
                }
            }
        }
    }
    n2=0;
    b.clear();
    f(i,n) {
        b[p[i].first] ++;
        if(b[p[i].first] == 1)
            if(a[i][1] != -1)
                n2++;
        d(n2);
        sort(all(p));
        b.clear();
        f(i,n) {
            b[p[i].first] ++;
            if(b[p[i].first] == 1)
                if(p[i].second != -1)
                    cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
}

