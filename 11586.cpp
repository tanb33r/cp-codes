/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes                cout<<"YES"<<endl
#define  no                 cout<<"NO"<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;


const int mod = 1000000007;
using namespace std;

int main() {
//	fopen;
    fastio;
    char s[100];
    while(gets(s)) {
        int a = 0, b = 0, i;
        for(i = 0; s[i]; i++) {
            if(s[i] >= 'a' && s[i] <= 'z')
                a += s[i]-'a'+1;
            if(s[i] >= 'A' && s[i] <= 'Z')
                a += s[i]-'A'+1;
        }
        while(a >= 10) {
            int tmp = 0;
            while(a > 0)
                tmp += a%10, a /= 10;
            a = tmp;
        }
        for(gets(s), i = 0; s[i]; i++) {
            if(s[i] >= 'a' && s[i] <= 'z')
                b += s[i]-'a'+1;
            if(s[i] >= 'A' && s[i] <= 'Z')
                b += s[i]-'A'+1;
        }
        while(b >= 10) {
            int tmp = 0;
            while(b > 0)
                tmp += b%10, b /= 10;
            b = tmp;
        }
        if(a > b){
            int tmp;
            tmp = a, a = b, b = tmp;
        }
        printf("%.2lf %%\n", (double)a*100/b);
    }
    return 0;
}
