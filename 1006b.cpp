#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x;
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;

int main() {


    in(n);
    in(k);
    int a[n][2];
    int b[n];
    f(i,n) {
        cin>>a[i][0];
        a[i][1] = 0;
        b[i] = a[i][0];

    }
    sort(b,b+n);
    reverse(b,b+n);
    map<int,int> m ;
    int sum = 0 ;
    f(i,k)
    m[b[i]]++,sum+=b[i];

    f(i,n) {
        if(m[a[i][0]]>0)
            m[a[i][0]]--,a[i][1] = 1;
    }
    d(sum);

    sum = 0;
    int j = 0;
    int c = 0;
    f(i,n) {
        j++;

        if(c==k-1)
            break;

        if(a[i][1] == 1)
            cout<<j<<" ",sum+=j,j=0,c++;
    }
    d((n-sum));


}
