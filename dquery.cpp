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

const int maxn = 1000005;
int K, ans[maxn], a[maxn], distinct_elements;

int ase[maxn];

struct Query {
    int index, L, R;
    bool operator<(const Query& other){
        return L/K < other.L/K ||
        (L/K == other.L/K && R<other.R);
    }
}

query[maxn];

void add(int i) {
    ase[a[i]]++;
    if(ase[a[i]] == 1)
        distinct_elements++;
}

void remove(int i) {
    ase[a[i]]--;
    if(ase[a[i]] ==0) distinct_elements--;

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
        query[i].L--;
        query[i].R--;
        query[i].index = i;
    }
    sort(query, query+q);


    int curL = 0, curR = -1;
    distinct_elements = 0;

    for(int i=0; i<q; i++) {
        int query_index = query[i].index;
        int l = query[i].L;
        int r = query[i].R;

        while(curL<l)
            remove(curL++);
        while(curL>l)
            add(--curL);
        while(curR<r)
            add(++curR);
        while(curR>r)
            remove(curR--);
        ans[query_index] = distinct_elements;
    }

    f(i,q) {
        cout << ans[i] << "\n";
    }
    return 0;
}


