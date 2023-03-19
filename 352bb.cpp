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
    int a[n],v[100005];
    map <int, int > m,ans,b;
    vector<pair <int, int> > p;
    int n2 = 0;
    f(i,n) {
        sf(a[i]);
        m[a[i]]++;
        if(m[a[i]] == 2)
            ans[a[i]] = i  - v[a[i]];
        else if(m[a[i]] > 2)
            if(ans[a[i]] != -1)
                if( ans[a[i]] != i  - v[a[i]])
                    ans[a[i]] = -1, n2++;
        v[a[i]] = i;
    }
    sort(a,a+n);
    n2 = m.size() - n2;
    d(n2);
    b.clear();
    f(i,n) {
        b[a[i]] ++;
        if(b[a[i]] == 1)
            if(ans[a[i]] != -1)
                cout<<a[i]<<" "<<ans[a[i]]<<endl;
    }
}
