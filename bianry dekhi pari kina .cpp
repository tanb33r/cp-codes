#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define vi vector<int>
typedef long long ll;
using namespace std;



int BS(int a[], int l, int h, int x)
{
    if(x >= l)
    {
        int m = l+(h-l)/2;
        if(a[m]==x)
            return m;
        if(a[m]<x)
            return BS(a, m+1, h, x);
        else
            return BS(a, l, m-1, x);
    }
    return -1;
}

int main()
{
    int a[] = {1,2,3,4,5,6};
    int b = BS(a,0,5,3);
    cout<<b;

}

