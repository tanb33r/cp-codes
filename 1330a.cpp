#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define  pb(x) push_back(x);
#define  in(x) int x; cin>>x;
#define  w(t)  int t; cin>>t; while(t--)
#define  d(x)  cout<<x<<"\n"
#define  all(v) (v).begin(),(v).end()

#define vi vector<int>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    w(t) {
        in(n);
        in(x);
        bool flag[1000] = {0};
        f(i,n) {
            in(b);
            flag[b-1]=1;
        }
        int i = 0;
        while(x) {
            if(!flag[i])
                x--;
            i++;
        }
        d(i);
    }
}

