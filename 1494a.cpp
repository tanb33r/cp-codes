#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  print(x)           cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  fast               ios::sync_with_stdio(0),cin.tie(0)
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

bool check(string s) {
    int x=0;
    f(i,s.size()) {
        if(s[i]=='(')x++;
        else x--;
        if(x<0) return 0;
    }
    if(x!=0) return 0;
    return 1;
}

void solution() {

    string s;
    cin>>s;
    char c = s[0];
    char x = s.back();
    int cnt=0,cnt2=0;
    f(i,s.size()) {
        if(s[i]==c) s[i]='(',cnt++;
        if(s[i]==x) s[i]=')',cnt2++;
    }
    if(cnt<cnt2) {
        f(i,s.size()) {
            if(s[i]!='(' and s[i]!=')')
                s[i]='(';
        }
    }
    if(cnt<cnt2) {
        f(i,s.size()) {
            if(s[i]!='(' and s[i]!=')')
                s[i]='(';
        }
    } else f(i,s.size()) {
        if(s[i]!='(' and s[i]!=')')
            s[i]=')';
    }
    cout<<(check(s)?"YES":"NO")<<"\n";

}

int main() {
//    fast;
    int test=1;
    cin>>test;
    while(test--)
        solution();
}












