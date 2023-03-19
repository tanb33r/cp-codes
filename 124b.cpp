#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl "\n"
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))
#define vi vector<int>
typedef long long ll;
using namespace std;


const int MAXN = 8;
const int INF = (int)1e+9;

int a[MAXN][MAXN];
int n, k;
int p[MAXN];
int ans;

int main() {

//    ios::sync_with_stdio(0);
//    cin.tie(0);
    scanf("%d %d\n", &n, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            char c;
            scanf("%c", &c);
            a[i][j] = c - '0';
            }
        scanf("\n");
        }
    f(i,k)
    p[i] = i;

    ans = INF;
    do {
        int mi = INF, ma = -INF;
        f(i,n) {
            int x = 0;
            f(j,k)
            (x *= 10) += a[i][p[j]];
            ma = max(ma, x);
            mi = min(mi, x);
            }
        ans = min(ans, ma - mi);
        }
    while (next_permutation(p, p + k));
    printf("%d\n", ans);
    return 0;
    }
