#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;
int main() {
    int n, m,t;
    while(cin>>n>>m>>t) {
        int x[100000];
        memset(x,0,sizeof(x));
        x[n]=1;
        x[m]=1;
        f(i,t)
        if(x[i]) {
            x[i+n] = max(x[i]+1,x[i+n]);
            x[i+m] = max(x[i]+1,x[i+m]);
        }

        int t2 = t,b=0;

        if(x[t])
            cout<<x[t]<<"\n";
        else
            while(x[t2--] == 0)
                b++;
        cout<<x[t2]<<" "<<b<<"\n";
    }
}


