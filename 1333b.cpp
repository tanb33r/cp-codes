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
#define fopen freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define fastio ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;

int main() {

//    fastio;
//   f(i,n)
    w(t) {
        in(n);
        int b[n],a[n];
        int c[n];
        int ase = 0;

        f(i,n)

        {
            cin>>a[i];
            c[i] = ase;
            if((ase == 0 || ase == 4) && a[i] == -1)
                ase += 3;
            if((ase == 0 || ase == 3) && a[i] == 1)
                ase += 4;

        }
        f(i,n)
        cin>>b[i];
        int flag =1;
        f(i,n) {
            if(b[i] > a[i])
                if(c[i] == 0 || c[i] == 3)
                    flag = 0;
            if(b[i] < a[i])
                if(c[i] == 0 || c[i] == 4)
                    flag = 0;
        }
        cout<<((flag)?"YES\n":"NO\n");
    }


}



