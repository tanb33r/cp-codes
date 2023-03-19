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

int col[mx],par[mx],dis[mx];
vector <int> veca[mx];
queue <int> q;




void init() {
    f(i,220) {
        dis[i] = 0;
        v[i].clear();
        }

    }

void BFS() {
    while (!q.empty()) {
        u = q.front();
        f(i,veca[u].size()) {
            t = veca[u][i];
            if (col[t]==0) {
                col[t]=1;
                par[t]=u;
                dis[t]=dis[u]+1;
                q.push(t);
                }
            }
        col[u]=2;
        q.pop();
        }
    }

int main() {
    cin >>  e;
    map<int, int > m;
    f(i,e) {
        cin >> a >> b;
        veca[a].push_back(b);
        veca[b].push_back(a);
        m[a]++;
        m[b]++;
        }
    cout << "input search value: ";
    in(k);
    in(y);
//    y++;

    col[k]=1;
    dis[k]=0;
    par[k]=k;
    q.push(k);
    BFS();
    cout << "Done.\n";

    int c =0;
    f(i,e) {
        cout<<dis[i]<<" ";
        }

    f(i,mx) {
        if(dis[i])
            cout <<dis[i]<<" "<<i<<endl;
        if(dis[i] > y)     c++;
        }
    cout<<"\n"<<c<<endl;
    cout<<"\n"<<m.size()<<endl;
    }

/*


13
0 1
1 2
1 4
1 3
2 6
3 8
4 7
6 10
7 8
7 9
9 10
5 10
5 8

*/
