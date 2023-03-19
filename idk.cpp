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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s2,s;
    cin>>s;
    s2 = "heidi";
    int j = 0;
    f(i,s.size()) {
        if(s[i] == s2[j])
            j++;
        if(j == s2.size())
            break;
        }

    cout<<((j==s2.size())?"YES\n":"NO\n");
    }
