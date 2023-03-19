#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d\n",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define vi vector<int>
typedef long long ll;
using namespace std;


int main()
{
    string s,s2;
    cin>>s>>s2;
    int n =s.size();
    if(n == s2.size())
    {
        int i = 0;
        while(s[i] == s2[i])
            i++;
        int j = n-1;
        while(s[j] == s2[j] )
            j--;

        reverse(s2.begin()+i,s2.begin()+j+1);

        cout<<((s == s2)?"YES\n":"NO\n");
    }
    else
        cout<<"NO\n";
}
