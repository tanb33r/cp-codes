#include <bits/stdc++.h>
using namespace std;

const int mx = 1000;
int j,n,a,b,e,k,u,t;
int isvisitd[mx],par[mx],dis[mx];
vector <int> v[mx];
queue <int> q;
// initializes arrays,vectors for next test case;
void init() {
    for(int i=0; i<mx; i++) {
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
    int N;
    cin >> N;
    BFS(N);

    //print all distance;
    for(int i = 0 ; i<edge; i++) {
        cout<<dis[i]<<" ";
    }

}

