#include <bits/stdc++.h>
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  cerr               if(0)cerr

using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    vector<pair<int,bool> > inv;
    int mex=1;
    int mexa[n] = {};
    map<int,int> mp;
    for(int i=0; i<n; ++i) {
        cin>>a[i];
        while(mp[mex]) mex++;
        mp[a[i]]=1;
        mexa[i]=mex;
    }
//    for(int i=0; i<n; ++i)cout<<mexa[i]<<' ';cout<<'\n';
    priority_queue<pair<int,int> > pq;
    for(int i=0; i<n; ++i) {
        if(a[i]>mexa[i]) {
            pair<int,int> pi;
            int val = a[i] - mexa[i];
            pq.push({-val,min(n,i+2)});
            deb(val<<' '<<i+2);
         }
    }
    vector<int>ans(n,1);
    int j = 0;
    while(j<n and pq.size()) {
        int val = -pq.top().first;
        ans[j] = pq.top().second;
        deb(a[j]);
        deb(j<<' '<<val);
        pq.pop();
        if(j+1 < val) {
            pq.push({-(val-j-1),ans[j]});
        }
        j++;
    }
    for(int i=0; i<n; ++i)cout<<ans[i]<<' ';cout<<'\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    cout.tie(NULL); 1 4 2 3 5

    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
}
