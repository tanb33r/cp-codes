#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
#define INF 10000

using namespace std;
typedef  long long          ll;

string arr[182];
int a[182][182];
queue< pair<int,int> >q;

bool isValid(int x,int y,int R,int C) {
    return (x>=0&&y>=0&&x<R&&y<C);
}

void solve() {
    int R,C;
    cin>>R>>C;
    f(i,R)
    cin>>arr[i];

    memset(a,-1,sizeof a);

    f(i,R)
    f(j,C)
    if(arr[i][j]=='1') {
        q.push(make_pair(i,j));
        a[i][j]=0;
    }

    int time=1;

    while(!q.empty()) {
        int size=q.size();
        while(size--) {
            pair<int,int> p=q.front();
            q.pop();
            if(isValid(p.first-1,p.second,R,C)&&a[p.first-1][p.second]==-1) {
                q.push(make_pair(p.first-1,p.second));
                a[p.first-1][p.second]=time;
            }
            if(isValid(p.first+1,p.second,R,C)&&a[p.first+1][p.second]==-1) {
                q.push(make_pair(p.first+1,p.second));
                a[p.first+1][p.second]=time;
            }
            if(isValid(p.first,p.second-1,R,C)&&a[p.first][p.second-1]==-1) {
                q.push(make_pair(p.first,p.second-1));
                a[p.first][p.second-1]=time;
            }
            if(isValid(p.first,p.second+1,R,C)&&a[p.first][p.second+1]==-1) {
                q.push(make_pair(p.first,p.second+1));
                a[p.first][p.second+1]=time;
            }
        }
        time++;
    }

    f(i,R) {
        f(j,C)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();

}
