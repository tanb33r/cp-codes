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

map< int, int > visited;
int col[mx],par[mx],dis[mx];
vector <int> veca[mx];
queue <int> q;




void init() {
    f(i,220) {
        dis[i] = 0;
        v[i].clear(); } }


void bfs(int s) {
    q.push(s);


    while(!q.empty()) {
        int u  =  q.front();
        f(i,v[u].size()) {
            int t = v[u][i];
            if(col[t] == 0) {
                dif[t] = dif[u]+1;
                col[t]=1;
                par[t]=u;
                q.push(t); } }
        q.pop();
        col[u] = 2; }


}

















int main() {




}


