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
#define  arrp(a,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
string fillup(string s) {
    int i = 0;
    while(s[i]!='?') i++;
    if(i==0) {
        int j = 0;
        while(s[j]=='?') j++;
        for(int k = j; ~k; k--) {
            if(s[k]=='?')
                s[k] = s[k+1]=='1'?'0':'1';
        }
    }
    return s;
}
string calcu(string s) {
    int i = 0;

    int n = s.size();
    f(i,n) {
        if(s[i]=='?')
            s[i] = s[i-1]=='1'?'0':'1';
    }
    return s;
}


int form(int n) {
    if(n==1)return 1;
    return (n*(n+1))/2;

}
void solve() {
    string s1,s3,s4 ;
    cin>>s1;
    int n = s1.size();
    string s2(n,'?');
//    deb(s2);

    if(s2==s1) {
        pr(form(n));
        return;
    }
    s1 = fillup(s1);
    reverse(all(s1));
    s1 = fillup(s1);
    reverse(all(s1));

    s3 = calcu(s1);
    reverse(all(s1));
    s4 = calcu(s1);
    reverse(all(s4));
    reverse(all(s1));

    int ans[n] {0};
    int ans2[n] {0};
    char c = s3[0];
    int p = 0;
    f(i,n) {
        p = (p+1)*(s3[i]==c);
        if(s1[i]=='?') {
            ans[i]=p;
        }
        c = c=='1'?'0':'1';
    }
    c = s4[n-1];
    string S="";
    for(int i = n-1; ~i; i--) {
        p = (p+1)*(s4[i]==c);
        if(s1[i]=='?') {
            s1 [i] = (ans[i]>p)?s3[i]:s4[i];
        }
        c = c=='1'?'0':'1';
    }
    deb(s1);
    deb(s3);
    deb(s4);
    int sum = 0;
//    f(i,n) {
//        if(ans[i]) sum+=form(ans[i]);
//    }
//deb(s1);
    s1+=s1[n-1];
    p=1;
    f(i,n+1) {
        if(s1[i]!=s1[i+1])p++;
        else {
            deb(i);
            deb(p);
            sum+=form(p),p=1;
        }
    }





    arrp(ans,n);
    pr(sum);
}


int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
