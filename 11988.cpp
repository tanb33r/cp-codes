#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio;      ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;

int main() {
    int j;
    char c,k;
    string g,s=" ",s2;
    while(cin>>g) {


        f(i,g.size()) {
            c = g[i];

            if(c=='[') {
                j=0;
                k=0;
            } else if(c==']') {
                j=1;
            } else {

                s2 = c;
                if(j)
                    s.insert(s.size()-1,(s2));
                else
                    s.insert(k++,(s2));
            }
        }
        cout<<s<<endl;
        s=" ";
    }
}



