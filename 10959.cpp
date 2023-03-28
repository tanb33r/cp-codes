#include <bits/stdc++.h>
#define INF 1000000
using namespace std;

const int mx = 1002;
int j,n,a,b,e,k,u,t;
int isvisitd[mx],par[mx],dis[mx];
vector <int> v[mx];
queue <int> q;
// initializes arrays,vectors for next test case;
void init() {
    for(int i=0; i<mx; i++) {
        dis[i] = INF;
        v[i].clear();
    }
}

void BFS(int src) {
    q.push(src);
    dis[src]=0;
    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        //visit childs
        for(int i=0; i<v[parent].size(); i++) {

            int child = v[parent][i];
            if (dis[child]==INF) {
                q.push(child);
//                isvisitd[child]=1;
                dis[child]=dis[parent]+1;
            }
        }

    }
}
// Code for distance
void solve(int t) {
    init();
    int edge;
    cin>>n>>edge;
    for(int i = 0 ; i<edge; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
//    cout << "input source";
    int N=0;
//    cin >> N;
    BFS(N);

    //print all distance;
    for(int i = 1 ; i<n; i++) {
        cout<<dis[i]<<"\n";
    }
    if(t)
        cout<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--)
        solve(t);
}

