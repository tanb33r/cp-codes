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
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
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
string s;
bool valid2(int l, int r) {
    int c = 0 ;
    int cnt = 0 ;
    bool ok = 0;
    bool ok2 = 0;
    bool p = 0;
    int n = s.size();
    string s2  ="";
    for(int i = l; i<=r; i++) {
        if(i<n-2 and s[i]=='+' and s[i+1]=='-') {
            i++;
            continue;
        }
        s2+=s[i];
    }
    int cnt2 = 0;
    f(i,s2.size()) {
        cnt+=s[i]=='+';
        cnt-=s[i]=='-';
    }
    return cnt>0;

//    for(int i = l; i<=r; i++) {
//        c+=s[i]=='+';
//        c-=s[i]=='-';
//        if(c<0) ok = 1;
//        if(ok)
//            p |= s[i]=='+';
//        if(p) {
//            cnt+=s[i]=='+';
//            cnt-=s[i]=='-';
//        }
//
//    }
//    debb(l,r);
    return ok and cnt>0;
}


bool valid3(int l, int r) {
    int c = 0 ;
    for(int i = r; i>=l; i--) {
        c+=s[i]=='+';
        c-=s[i]=='-';
        if(c>0) return 1;
    }
//    debb(l,r);
    return 0;
}


bool valid(int l, int r) {
    int c = 0 ;
    for(int i = l; i<=r; i++) {
        c+=s[i]=='+';
        c-=s[i]=='-';
        if(c<0) return 1;
    }
//    debb(l,r);
    return 0;
}
void solve() {
    cin>>s;
    int n = s.size();
    int c = 0 ;
    string s2;
    map<int,int> m;
    int k = 0;
    f(i,n) {
        c+=s[i]=='+';
        c-=s[i]=='-';
        if(c<2 and s[i]=='0') {
            ps(NO);
            return;
        }
        if(s[i]=='1')
            while(k<c)
                if(m.find(k)==m.end())
                    m[k++] = 1;
                else if(m[k]==0) {
                    ps(NO);
                    return;
                }

        if(s[i]=='0') {
            if(m[c]==1) {
                ps(NO);
                return;
            } else m[c] = 0;
        }


    }
//        if(i<n-2 and s[i]=='+' and s[i+1]=='-') {
//            i++;
//            continue;
//        }
//
//        if(i<n-3 and s[i]=='-' and s[i+1]=='+' and (s[i]=='1' or s[i]=='0')) {
//            i++;
//            i++;
//            continue;
//        }
//        if(i<n-1 and s[i]=='0' and s[i+1]=='1') {
//            ps(NO);
//            return;
//        }
//        if(i<n-1 and s[i]=='1' and s[i+1]=='0') {
//            ps(NO);
//            return;
//        }
//debb(s);
    f(i,n) {
        if(s[i]=='1') {
            int j = i+1;
            while(j<n)
                if(s[j]=='0') {
                    if(!valid3(i,j)) {
                        ps(NO);
                        return;
                    } else {
                        i = j-1;
                        break;
                    }
                } else j++;
        }
        if(s[i]=='0') {
            int j = i+1;
            while(j<n)
                if(s[j]=='1') {
                    if(!valid(i,j)) {
                        ps(NO);
                        return;
                    } else {
                        i = j-1;
                        break;
                    }
//                    i = j-1;
                } else j++;
        }
    }
    ps(YES);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
