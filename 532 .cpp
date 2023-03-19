#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
struct Position {
    int L;
    int R;
    int C;

    // for map.
    bool operator<(const Position &p) const {
        if (this->L < p.L)
            return true;
        else if (this->L == p.L) {
            if (this->R < p.R)
                return true;
            else if (this->R == p.R) {
                if (this->C < p.C)
                    return true;
            }
        }
        return false;
    }
};

Position operator+(const Position &p1, const Position &p2) {
    Position p;
    p.L = p1.L + p2.L;
    p.R = p1.R + p2.R;
    p.C = p1.C + p2.C;
    return p;
}

Position dir[] = { {0, 0, 1},
    {0, 0, -1},
    {1, 0, 0},
    {-1, 0, 0},
    {0, 1, 0},
    {0, -1, 0}
};

int main() {
    int L, R, C;
    while (cin >> L >> R >> C, L + R + C > 0) {
        map<Position, char> dungeon;
        Position sPos, ePos;

        for (int l = 0; l < L; ++l)
            for (int r = 0; r < R; ++r)
                for (int c = 0; c < C; ++c) {
                    Position p;
                    p.L = l;
                    p.R = r;
                    p.C = c;
                    cin >> dungeon[p];
                    if (dungeon[p] == 'S')
                        sPos = p;
                    else if (dungeon[p] == 'E')
                        ePos = p;
                }

        // BFS.
        queue<Position> q;
        map<Position, int> dist;

        dist[sPos] = 0;
        q.push(sPos);
        while(!q.empty() and !dist.count(ePos)) {
            Position u = q.front();
            q.pop();
            f(i,6) {
                Position v = u+dir[i];
                if(dungeon.count(v) and dungeon[v]!='#'
                    and !dist.count(v)) {
                    dist[v] = dist[u]+1;
                    q.push(v);
                }
            }
        }

        if (dist.count(ePos))
            cout << "Escaped in "
                 << dist[ePos]
                 << " minute(s)."
                 << endl;
        else
            cout << "Trapped!"
                 << endl;
    }
    return 0;
}







