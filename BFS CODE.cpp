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
const int mx = 1000;
typedef long long ll;
using namespace std;

int j,n,a,b,e,k,u,t;

int isvisitd[mx],par[mx],dis[mx];
vector <int> v[mx];
queue <int> q;
// initializes arrays,vectors for next test case;
void init() {
    f(i,220) {
        dis[i] = 0;
        v[i].clear();
    }
}

void BFS(int src) {
    q.push(src);
    while (!q.empty()) {
        int parent = q.front();
        //visit childs
        for(int i=0; i<v[parent].size(); i++) {

            int child = v[parent][i];
            if (isvisitd[child]==0) {
                q.push(child);
                isvisitd[child]=1;
                dis[child]=dis[parent]+1;
            }
        }
        q.pop();
    }
}
// Code for distance
int main() {
    int edge;
    cin>> edge;
    for(int i = 0 ; i<edge; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout << "input source";
    int N, D;
    cin >> N;
    BFS(N);
    cout << "Done.\n";

    //print all distance;
    for(int i = 0 ; i<edge; i++) {
        cout<<dis[i]<<" ";
    }

}
