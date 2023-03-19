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

int main()
{

    int tt = 0;
    in(n);
    in(x);  // reqred
    in(d); // melt

    int a[n];
    int flag = 0 ;
    int k = 0 ;
    f(i,n)
    {
        cin>>a[i];

        int sum  =  0;
        if(!flag)
            f(j,i+1)
        {
            if(j!=i)
                a[j] -= d*k;

            if(a[j] > 0 )
                sum+=a[j];
        }

        k=1;

        if(sum>=x)
            flag = i+1 ;
    }

    cout<<flag<<endl;


}

