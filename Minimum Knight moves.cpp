#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes                cout<<"YES"<<endl
#define  no                 cout<<"NO"<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  vprint(vec)        for(int i=0; i<vec.size(); i++)cout << vec[i] << " ";cout<<endl
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;
const int mod = 1000000007;
int dx[] = {2,2,-2,-2,1,1,-1,-1};
int dy[] = {1,-1,1,-1,2,-2,2,-2};

using namespace std;



char c,c2;
int x,x2,y2,y;
bool valid(int a, int b) {
    if(x+a > 7 or x+a<0) ret;
    if(y+b > 7 or y+b<0) ret;
    return 1;
}
int bfs() {
    map< pair<int,int>, int> visited;
    queue <pair<int,int> > q ;
    q.push({x,y});
    while(1) {
        x = q.front().F ;
        y = q.front().S ;
        pair<int,int> top = q.front();
        if(x == x2 and y == y2)
            return visited[top];

        f(i,8) {
            if(valid(dx[i],dy[i]))
                if(!visited.count({x+dx[i],y+dy[i]})) {
                    visited[ {x+dx[i],y+dy[i]}] = visited[top] + 1;
                    q.push({x+dx[i],y+dy[i]});
                }
        }
        q.pop();
    }
}

int main() {
    fastio;
    w(t) {
        cin>>c>>y>>c2>>y2;
        y--,y2--;

        x = c - 'a';
        x2 = c2 - 'a';
        int ans = bfs();
        d(ans);
    }
}
