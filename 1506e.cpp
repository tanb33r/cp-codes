#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;


void placeLeft(vector<int> &q, bool minimize) {
    set<int> left;
    f(i,q.size()) left.insert(i+1);

    for (int i : q)
        if (i != -1) left.erase(i);

    int lastPlaced = -1;
    f(i,q.size())
    if (q[i] == -1) {
        set<int>::const_iterator it;
        if (minimize) {
            it = left.begin();
        } else {
            it = --left.lower_bound(lastPlaced);
        }
        q[i] = *it;
        left.erase(it);
    } else {
        lastPlaced = q[i];
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> q(n);
    f(i,n) cin >> q[i];

    vector<int> b(n, -1), c(n, -1);
    for (int i = 0, lp = -1; i < n; lp = q[i++])
        if (lp != q[i])
            b[i] = c[i] = q[i];

    placeLeft(b, true);
    placeLeft(c, false);


    f(i,n)
    cout<<b[i]<<" ";
    newl;
    f(i,n)
    cout<<c[i]<<" ";
    newl;
}


int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
