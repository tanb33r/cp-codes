
/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes 		        cout<<"Yes"<<endl
#define  no		            cout<<"No"<<endl
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
int ans  = 0 ;
int ma = 0 ;
int l;
void peak(int a[],int j,  int k)
{
//    cout<<"asd  ";

    int p =0;
    int kk = k;
    ff(i,j,--kk)
    {
        if(a[i]>a[i-1] and a[i]> a[i+1])
            p++,cout<<p<<" ";

    }
    if(ma<p)
    {
        int i = j;
        ma = p;
        int pp =0;
        while(pp!=p/2){
            if(a[i]>a[i-1] and a[i]> a[i]+1)
                pp++;
        }
        l=pp;
    }
}



int main()
{

    w(t)
    {

        in(n);
        in(k);
        int a[n];
        f(i,n)  cin>>a[i];

        for(int  j = 0 ; j<=n-k ; j++)
            peak(a,j,k);

            newl;
        cout<<ma<<" "<<l<<endl;
    }
}
