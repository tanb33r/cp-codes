#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb                 emplace_back
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<__LINE__<<"line  "<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MAX= 2e5+5;
void solve(int c) {
    string text;
    int Q;
    cin >> text >> Q;
    set<pair<int, int>> ranges;
    int lastID = 0;
    for (int i = 0; i < int(text.size()); i ++) {
        if (text[i] != text[lastID]) {
            ranges.insert(make_pair(lastID, i - 1));
            lastID = i;
        }
    }
    ranges.insert(make_pair(lastID, int(text.size()) - 1));

    cout << "Case " << c + 1 << ":" << '\n';
    while (Q --) {
        int type, pos;
        cin >> type >> pos;
        if (type == 1) {
            auto it = --ranges.upper_bound(make_pair(pos,  1 << 30));
            cout << ((*it).second - (*it).first + 1) << '\n';
        } else {
            auto it = --ranges.upper_bound(make_pair(pos,  1 << 30));
            int l = (*it).first, r = (*it).second;
            ranges.erase(it);
            if(l!=pos) ranges.insert(make_pair(l,pos-1));
            if(r!=pos) ranges.insert(make_pair(pos+1,r));
        }
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    f(i,t)
        solve(i);
}


