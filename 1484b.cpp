#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  hmm(x)             cout<<(x?"YES":"NO")<<endl;
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solution() {
    int n,ANS=0,MAX=0;
    cin>>n;
    int a[n];
    map<int,int> s,m,m2;
    f(i,n) {
        cin>>a[i];
        MAX = max(MAX,a[i]);
        s[a[i]]++;
    }
    if(s.size()==1) {
        ps(0);
        return;
    }
    if(n<=2) {
        ps(0);
        return;
    }

    int k = 1;
    f(i,n-1) if(a[i+1]>a[i]) m[a[i+1]-a[i]]++, k=0;
    if(k) {
        int in = a[1]-a[0];
        f(i,n-1)
        if(a[i+1]-a[i]!= in) {
            ps(-1);
            return;
        }
        ps(0);
        return;
    }
    k = 1;
    f(i,n-1) if(a[i+1]<a[i]) m2[a[i+1]-a[i]]++, k=0;

    if(k) {
        int in = a[1]-a[0];
        f(i,n-1)
        if(a[i+1]-a[i]!= in) {
            ps(-1);
            return;
        }
        ps(0);
        return;
    }

    int c = 0;
    if(m.size()>1 or m2.size()>1) {
        ps(-1);
        return;
    }
    if(m.size())
        f(i,n-1)
        if(a[i+1]>a[i]) {
            c = a[i+1]-a[i];
            break;
        }

    if(c) {
        f(i,n-1)
        if(a[i+1]<a[i]) {
            ANS = a[i]-a[i+1]+c;
            break;
        }

        f(i,n-1) {
            if(a[i+1]>a[i]) {
                if(a[i+1]-a[i]!=c) {
                    ps(-1);
                    return;
                }
            } else if(a[i+1]!= (a[i]+c)%ANS) {
                ps(-1);
                return;
            }

        }
        if(MAX>=ANS) {
            ps(-1);
            return;
        }
        cout<<ANS<<" "<<c<<"\n";
        return;
    }
    ps(-1);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solution();
}
 
