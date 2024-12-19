#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<long long,long long>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(VA_ARGS)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;

ll arr[200005];
ll crr[200005];
ll brr[200005];
ll n,m,k;

string fnc(string a, string b) {
    ll i,j;
    string s;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    for(i=0; i<a.size(); i++) {
        if(b.size()<=i) {
            s.push_back(a[i]);
        } else {
            if(a[i]==b[i]) s.push_back('0');
            else s.push_back('1');
        }
    }
    reverse(s.begin(),s.end());
    return s;
}

void solve() {
    ll l,r,i,j,a,b,c;

    cin>>n;
    string s;
    string ans;

    for(i=1; i<=n; i++) {
        cin>>s;
        ans = s;
        for(j=0; j<s.size(); j++) {
            if(s[j]=='0') break;
        }

        if(j==s.size()) {
            cout<<1<<" "<<1<<" "<<1<<" "<<s.size()<<endl;
        } else {
            ll len = s.size()-j;
            ll result=0;
            for(j=0; j+len-1<s.size(); j++) {
                string ss=s.substr(j,len);
                string temp=fnc(s,ss);
                if(temp>ans) {
                    result = j;
                    ans = temp;
                }
            }
            cout<<result+1<<" "<<result+len<<" "<<1<<" "<<s.size()<<endl;
        }
    }
//    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    solve();
}
