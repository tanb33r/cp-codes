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
vector<int> v[120];
map <int, int > ma;
bool visited[120];

stack<int> st;

void init() {
    visited[0] = 1;

    f(i,120)
    v[i].clear();
}
void topo(int n) {

    visited[n] = 1;

    f(i,v[n].size()) {
        if(!visited[v[n][i]])
            topo(v[n][i]);
    }

    st.push(n);
}

int main() {

    while(1) {
        in(n);
        in(m);
        if(n == m and m == 0)   break;
        init();
        memset(visited,0,sizeof(visited));

        f(i,m) {
            in(a);
            in(b);
            v[a].pb(b);
        }
        f(i,n+1)
        if(v[i].size() and !visited[i])
            topo(i);


        while(!st.empty()) {
            cout<<st.top()<<" ";
            ma[st.top()]=1;
            st.pop();

        }
        f(i,n)
        if(!ma[i+1])
            cout<<i+1<<" ";
        cout<<endl;

        ma.clear();
    }
}
