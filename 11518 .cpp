#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;
//map <int , vector<int> > v;
vector<int> v[10005];
map <int, int > ma;
bool visited[10005];


void init() {
    visited[0] = 1;

    f(i,10005)
    v[i].clear();
}
void topo(int n, stack <int> &st) {

    visited[n] = 1;

    f(i,v[n].size()) {
        if(!visited[v[n][i]])
            topo(v[n][i], st);
    }

    st.push(n);
}

int main() {

    w(t) {

        stack<int> st;
        in(n);
        in(m);
        in(l);

        init();
        memset(visited,0,sizeof(visited));

        f(i,m) {

            in(a);
            in(b);
            v[a].pb(b);
        }
        f(i,l) {
            in(x);
            topo(x, st);
        }

        while(!st.empty()) {
            ma[st.top()]++;
            st.pop();
        }
        cout<<ma.size()<<endl;
        ma.clear();
    }
}

