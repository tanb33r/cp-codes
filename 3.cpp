#include <bits/stdc++.h>
using namespace std;

int nodes,edges;
int graph[100][100],visited[100],cnt[100];

void BFS(int s) {
    int i;
    visited[s]=1;
    queue <int> q;
    q.push(s);
    while(!q.empty()) {
        int a=q.front();
        q.pop();
        for(i=1; i<=nodes; i++) {
            if(graph[a][i]==1 && visited[i]==0) {
                q.push(i);
                visited[i]=1;
            }
        }
    }
}


int main() {


    int i,j,a,b;
    cout<<"Enter Number of Nodes and Edges ";
    cin>>nodes>>edges;

    char c1,c2;
    for(i=1; i<=edges; i++) {
        cin>>c1>>c2;
        a=c1-64;
        b=c2-64;
        graph[a][b]=1;
    }
    BFS(1);
    bool flag=0;
    for(i=1; i<=nodes; i++) {
        if(visited[i]==0)
            flag=1;
    }
    if(flag==1)
        cout<<"Disjoint\n";
    else
        cout<<"Not disjoint\n";
    int mx=0;
    for(i=1; i<=nodes; i++) {
        for(j=1; j<=nodes; j++) {
            if(graph[i][j]==1) {
                cnt[i]++;
                mx=max(mx,cnt[i]);
                cnt[j]++;
                mx=max(mx,cnt[j]);
            }
        }
    }
    cout<<"Degree of Graph = "<<mx<<"\n";

    return 0;
}
