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
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;



int col[1000],par[1000],dis[1000];

queue <int> q;


   vi v[100];

void BFS() {

    while(!q.empty()) {

        int u  =  q.front();

        f(i,v[u].size()) {
            int t  =  v[u][i];
            if(col[t] == 0) {
                col[t] = 1;
                par[t] = u;
                dis[t] = dis[u]++;
                q.push(t);
                }
            }
        col[u] = 2;
        q.pop();
        }
    }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    in(k);

    f(i,k) {
        in(a);
        in(b);
        v[a].push_back(b);
        v[b].push_back(a);
        }
    cout<< "src"<<endl;
    in(s);
    col[s]=1;
    dis[s]=0;
    par[s]=s;
    q.push(s);
    BFS();

    cout<<"DONE"<<endl;


    }

