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
#define  len(s)             (int)s.size()
#define  deb(x)             cerr<<__LINE__<<"line  "<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int, int> pii;
const int MAX = 2e5 + 5;

int Right_most_setbit(int num) {
    if(num==0) { // for num==0 there is zero set bit
        return 0;
    } else {
        int pos = 1;
        // counting the position of first set bit
        for (int i = 0; i < 32; i++) {
            if (!(num & (1 << i)))
                pos++;
            else
                break;
        }
        return pos;
    }
}

void solve() {
    int n,m;
    cin>>n>>m;
    if(n==1) {
        ps(yes);
        pr(m);
    }

    if(m%2 and n==1) {
        ps(no);
        return;
    }

    priority_queue<int, vector<int>, greater<int> >  pq;
    pq.push(m);
    vector<int > v;

    while(pq.size()<n) {
        int x = pq.top();
        pq.pop();
        int y = Right_most_setbit(x);
        y--;
        y = 1<<y;
        x-=y;
        if(x>1)
            pq.push(x);
        if(y==1)  {
            v.pb(1);
        } else {
            pq.push(y/2);
            pq.push(y/2);
        }
        deb(pq.size());
    }

    while(!pq.empty()) {
        cout<<pq.top()<<'l';
        pq.pop();
    }
    while(!v.empty()) {
        cout<<v.back()<<' ';
        v.pop_back();
    }
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
}


