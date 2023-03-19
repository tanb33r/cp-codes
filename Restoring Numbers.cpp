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

void g(int a, int b)
{
    if (__gcd(b, a - b) == b && a != b)
        cout << a - min(b, a - b)<<" "<<min(b, a - b)<<"\n";
    else
        cout <<-1<<"\n";
}

int main()
{
    in(a);
    in(b);

    g(a, b);
}
