#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define mod 1000000007

using namespace std;

int main()
{

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    in(x);
    in(y);
    in(n);
    n--;
    int z = n%6;
    int ans;
    switch(z)
    {
    case 0:
        ans = x;
        break;

    case 1:
        ans = y;
        break;

    case 2:
        ans = y-x;
        break;

    case 3:
        ans = -x;
        break;

    case 4:
        ans = -y;
        break;

    case 5:
        ans = -y+x;
        break;
    }
    ans %=mod;
    if(ans<0)
        ans+=mod;
    cout<<ans;

}


/*
1 2
1999999998


*/




