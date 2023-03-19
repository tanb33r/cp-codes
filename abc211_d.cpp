#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
using namespace std;

const int mx = 100005;
typedef long long ll;
using namespace std;

int j,n,m,a,b,e,k,u,t;

int col[mx],par[mx],dis[mx];
vector <int> veca[mx];
queue <int> q,q2;

//void init() {
//    f(i,mix) {
//        dis[i] = 0;
//        veca[i].clear();
//    }
//}

void BFS() {
    while (!q.empty()) {
        u = q.front();
        f(i,veca[u].size()) {
            t = veca[u][i];
                //                par[t]=u;
                dis[t]=dis[u]+1;
//            if(t!=n)
                q.push(t);
            }
        }
        q.pop();
    }

int mind= 0 ;
int ans = 0 ;
void BFS2() {
    while (!q2.empty()) {
        u = q2.front();
        f(i,veca[u].size()) {
            t = veca[u][i];
            if (col[t]==0) {
                col[t]=1;
                //                par[t]=u;
                dis[t]=dis[u]+1;
                if(t==n and dis[t] == mind)ans++;
                q2.push(t);
            }
        }
        q2.pop();
    }
}

int main() {
    cin>>n>>m;
    map<int, int > ma;
    f(i,m) {
        cin >> a >> b;
        veca[a].push_back(b);
        veca[b].push_back(a);
        ma[a]++;
        ma[b]++;
    }
    dis[1]=0;
    par[1]=1;
    q.push(1);
    BFS();

    int c = 0;
    f(i,n) {
        cout<<dis[i]<<" ";
    }

    f(i,mx) {
        if(dis[i])
            cout <<dis[i]<<" "<<i<<endl;
//        if(dis[i] > y)     c++;
    }
    mind = dis[n];
    q.push(1);
    memset(col,0,sizeof col);
    BFS2();
    deb(ans);
//    cout<<"\n"<<ans<<endl;
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
