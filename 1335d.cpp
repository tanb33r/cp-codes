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
#define  fastio       ios::sync_with_stdio(0),cin.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;

int main() {


    w(t) {

        char a[9][9];
        f(i,9)
        f(j,9)
        cin>>a[i][j];

        int i, j;
        i=0,j=0;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';


        i++,j=3;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';


        i++,j=6;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';


        i++,j=1;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';


        i++,j=4;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';


        i++,j=7;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';

        i++, j=2;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';


        i++,j=5;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';


        i++,j=8;
        a[i][j]+=1;
        if(a[i][j]>'9')
            a[i][j] = '1';


        cout<<endl;
        f(ii,9) {
            f(jj,9)
            cout<<a[ii][jj];
            cout<<endl;
        }
        cout<<endl;
    }


}

