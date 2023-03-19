#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  F                  first
#define  S                  second
typedef  long long          ll;
using namespace std;

int ar[200001];
void filln(int n) {

    priority_queue<pair<int, pair<int, int > > > q;
    int cnt = 1;
    q.push({n,{-1,-n}});
    while(!q.empty()) {

        int l = -q.top().S.F;
        int r = -q.top().S.S;
        q.pop();
        int mid =( l+r )/2;
        ar[mid] = cnt++;

        if(l == r) continue;
        if(l<mid)  q.push({mid - l,{-l, -(mid-1)}});
        if(r>mid)  q.push({r - mid,{-(mid+1), -r}});
    }
}


int main() {
    fastio;
    w(t) {
        in(n);
        filln(n);
        ff(i,1,n) cout<<ar[i]<<" ";newl;
    }
}

