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
#define  INF 100000000
//#define  cerr               if(0)cerr

using namespace std;
typedef pair<int,int> pii;
typedef  long long          ll;
int dis[8][8];

bool isValid(int x,int y) {
    return (x>=0 && x<8 && y>=0 && y<8);
}

vector<int> conv(string s) {
    vector<int> v(2);
    v[0] = '8' - s[1];
    v[1] = s[0] - 97;
    return v;
}

void pre(vector<int> s) {
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            dis[i][j] = INF;
    dis[s[0]][s[1]] = 0;
}

int solve(vector<int> s, vector<int> d) {
    pre(s);
    queue< vector<int> > q;
    vector<int> m, tmp(2);
    q.push(s);
    while(!q.empty()) {
        m = q.front();
        q.pop();
        if(m[0] == d[0] && m[1] == d[1]) return dis[d[0]][d[1]];

        int a[] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int b[] = {1, 2, 2, 1, -1, -2, -2, -1};
        f(i,8) {
            tmp[0] = m[0] + a[i];
            tmp[1] = m[1] + b[i];
            if(isValid(tmp[0], tmp[1]) && ( dis[tmp[0]][tmp[1]] > dis[m[0]][m[1]] + 1)) {
                dis[tmp[0]][tmp[1]] = dis[m[0]][m[1]] + 1;
                q.push(tmp);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    string s, d;
    cin>>t;
    while(t--) {
        cin >> s >> d;
        cout<<solve(conv(s), conv(d))<<"\n";
    }

}
