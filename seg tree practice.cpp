#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;(a<n)?i<n:i>=n;(i<n)?i++:i--)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb                 emplace_back
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
#define mx 100001
int arr[mx];
int tree[mx * 3];
void init(int node, int b, int e) {
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = min(tree[Left], tree[Right]);
}

void build(int hi, int l, int r){
    if(l == r){
        tree[hi]= arr[l];
        return;
    }

    int m= (l+r)/2;
    build(2*hi, l, m);
    build(2*hi+1, m+1, r);

    tree[hi]= min(tree[2*hi],tree[2*hi+1]);
}

int query(int node, int b, int e, int i, int j) {
    if (i > e || j < b) return INT_MAX;
    if (b >=i and e<=j) return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1,p2);
}

int query2(int hi, int l,int r,int s,int e){
    if(l > e || r < s) return INT_MAX;
    if(l>= s && r<= e)return tree[hi];

    int m= (l+r)/2;
    int a= query2(2*hi, l, m, s, e);
    int b= query2(2*hi+1, m+1, r, s, e);
    return min(a,b);
}


int T=1;
int solve() {

    int n,q;

    scanf("%d%d",&n,&q);
    f(i, n)
    scanf("%d",&arr[i+1]);
    init(1, 1, n);
    printf("Case %d:\n",T++);

//f(I,3*n){cout<<(I?" ":"")<<tree[I+1];} cout<<'\n';
    f(i, q) {
        int x,y;

        scanf("%d%d",&x,&y);
        printf("%d\n",query(1, 1, n, x, y));
    }

}

int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    scanf("%d",&t);
    while(t--)
        solve();
}

