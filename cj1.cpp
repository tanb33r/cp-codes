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
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;

int main() {
    int tt = 0;
    w(t) {
        in(n);
        int k =0, r=0, c=0;
        map <int,int> m, m2;

        int a[n][n];
        f(i,n) {
            f(j,n) {
                sf(a[i][j]);
                m[a[i][j]]++;
                if(i==j)
                    k+=a[i][j];
                }
            if(m.size()!=n)
                r++;
            m.clear();
            }
        f(j,n) {
            f(i,n)
            m[a[i][j]]++;

            if(m.size()!=n)
                c++;
            m.clear();
            }
        printf("Case #%d: %d %d %d\n",++tt,k,r,c);
        }
    }


