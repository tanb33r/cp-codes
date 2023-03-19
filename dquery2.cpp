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
#define  fopen              freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
//#define  cerr               if(0)cerr

typedef  long long          ll;

const int mod = 1000000007;
const int maxn = 1e6;
using namespace std;

int ase[maxn],de,k,ans[maxn], a[maxn];
struct Query {
    int l, r, index;
    bool operator < (const Query &other) {
        return l/k < other.l/k || (l/k  == other.l/k  && r<other.r);
    }
}
query[maxn];

void add(int i) {
    if(++ase[a[i]] == 1)
        de++;
}
void del(int i) {
    if(--ase[a[i]] == 0)
        de--;
}

int main() {
    in(n);
    k = sqrt(n);
    f(i,n)cin>>a[i];
    in(q);
    f(i,q) {
        in(x);
        in(y);
        query[i].l = x-1;
        query[i].r = y-1;
        query[i].index = i;
    }
    sort(query,query+q);


    int curL = 0, curR = -1;
    de = 0;

    f(i,q) {
        while(curL<query[i].l) del(curL++);
        while(curL>query[i].l) add(--curL);
        while(curR<query[i].r) add(++curR);
        while(curR>query[i].r) del(curR--);
        ans[query[i].index]= de;
    }

    f(i,q) {
        cout << ans[i] << "\n";
    }
    return 0;
}



