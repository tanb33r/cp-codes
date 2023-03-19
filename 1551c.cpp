#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
#define  FF                 first
#define  SS                 second
#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

int n,sum = 0,suma = 0;

vector<pair<int,string> > v;
int cnt(string s, char c) {
    int ans = 0;
    f(i,s.size()) ans += s[i]==c;
    return ans;
}

bool cmp(pair<int,string> a,pair<int,string> b) {
    return (int)(a.SS.size()-2*a.FF) > (int)(b.SS.size()-2*b.FF);
}

int dekhi(char c) {
    sum = suma = 0;
    f(i,n) {
        int x=cnt(v[i].SS,c);
        v[i].FF = x;
        sum+=v[i].SS.size(),suma+=x;
    }
    sort(all(v),cmp);
    int ans = n;
    f(i,n) {
        if(suma>sum/2) break;
        suma-=cnt(v[i].SS,c);
        sum-=v[i].SS.size();
        ans--;
    }
    return ans;
}


void solve() {
    cin>>n;
    sum = suma = 0;
    v.clear();
    string s;
    f(i,n) {
        cin>>s;
        v.emplace_back(0,s);
    }
    int ans = 0;
    ff(c,'a','f') ans = max(ans,dekhi(c));
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
