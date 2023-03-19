
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout<<#x<<" "<<x<<endl;
#define pr(x) cout<<x<<"\n"
void solve() {
    int n,m;
    cin>>n>>m;
    int x,y,flag=0;
    vector<int> adj[100];
    for(int i=1; i<=m; i++) {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1; i<=n; i++) {
        cout<<"Adjacent of vertex "<<i<<" is : ";
        for(auto u:adj[i]) {
            cout<<u<<" ";
        }
        cout<<endl;
    }
    cout<<"-------------------"<<endl;
    bool visited[n] = {false};
    queue<int> v;
    int s = 1;
    v.push(s);
    while(!v.empty()) {
        s=v.front();
        if(visited[s]==false) {
            cout<<s<<" ";
            flag++;
            visited[s]=true;
        }
        cout<<endl;
        v.pop();
        for (auto it=adj[s].begin(); it!=adj[s].end(); it++) {
            if(visited[*it]==false) {
                //visited[*it]=true;
                v.push(*it);
            }
        }
    }
    //cout<<"-------------------"<<endl;
    if(flag==n) pr("CONNECTED");
    else pr("NOT CONNECTED");
}


int main() {
    freopen("practice_input.txt", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}



