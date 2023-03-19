#include <bits/stdc++.h>
using namespace std;
const int INF=9999999,V=5;
int G[1000][1000];

int main() {
    cout<<"input"<<endl;
    cin>>V;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            cin>>G[i][j];

    int no_edge=0,selected[V];

    memset(selected, 0, sizeof(selected));
    selected[0] = 1;
    int x,y;
    cout << "Edge : Weight"<< endl;
    while (no_edge < V - 1) {
        int min = INF;
        x = 0,y = 0;
        for (int i = 0; i < V; i++) {
            if (selected[i]) {
                for (int j = 0; j < V; j++) {
                    if (!selected[j] && G[i][j]) {
                        if (min > G[i][j]) {
                            min = G[i][j];
                            x = i,y = j;
                        }
                    }
                }
            }
        }
        cout << x << " - " << y << " :  " << G[x][y] << endl;
        selected[y] = 1;
        no_edge++;
    }
    return 0;
}
