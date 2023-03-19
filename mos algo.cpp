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
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
typedef  long long          ll;
const int mod = 1000000007;
using namespace std;

const int maxn = 200002;
int K, ans[maxn], a[maxn], sum;

struct Query {
    int index, L, R;
    bool operator < (const Query &other) const {
        int block_own = L/K;
        int block_other = other.L/K;
        if(block_own == block_other)
            return R < other.R;
        return block_own < block_other;
    }
}

query[maxn];

void add(int index) {
    sum+=a[index];
}

void remove(int index) {
    sum-=a[index];
}

int main() {

    fastio;
    in(n);
    K = sqrt(n);
    f(i,n)
    cin >> a[i];

    in(q);
    f(i,q) {
        cin >> query[i].L >> query[i].R;
        query[i].index = i;
    }
    sort(query, query+q);
    int L=0, R=-1;
    f(i,q) {
        while(R<query[i].R) add(++R);
        while(L<query[i].L) remove(L++);
        while(R>query[i].R) remove(R--);
        while(L>query[i].L) add(--L);
        ans[query[i].index] = sum;
    }
    f(i,q) {
        cout << ans[i] << "\n";
    }
    return 0;
}

