#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  ms(a,x)            memset(a,x,sizeof(a))
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;

int n, x ;
vector<int> ans;
bool taken[107];


const int S = 50;
bool prime[S];
void sieve() {
    for(int i = 4 ; i < S; i+=2)
        prime[i] = 1 ;

    for(int i = 3 ; i < S; i+=2)
        if(!prime[i])
            for(int j = i*i ; j < S; j+=2*i)
                prime[j] = 1 ;
}

void gen() {
    if(ans.size() == n ) {
        if(prime[ans[ans.size() - 1] + ans[0]]) return;

        f(i,n) {
            if(i)cout<<" ";
            cout<<ans[i];
        }
        newl;
        return;
    }

    ff(i,1,n) {
        int ok = 1;
        f(j,ans.size()) if(ans[j] == i) ok = 0;
        if(ok and taken[i] == 0 and !prime[ans[ans.size() - 1] + i ]) {
            taken[i] = 1;
            ans.pb(i);
            gen();
            taken[i] = 0;
            ans.pop_back();
        }
    }
}

int main() {
    sieve();
    int t = 0;
    while(cin>>n) {

        if(t++) cout<<"\n";
        cout<<"Case "<<t<<":\n";
        ans.clear();
        ans.pb(1);

        ms(taken,0);
        gen();

    }


}
