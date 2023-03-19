#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
using namespace std;

#define MAX_N 101

int n,x[MAX_N],lo,hi;
long long res=0LL;
vector<int>s1,s2;

int main() {
    scanf("%d",&n);

    f(i,n)
    scanf("%d",&x[i]);

    f(i,n)
    f(j,n)
    f(k,n) {
        s1.push_back(x[i]*x[j]+x[k]);
    }

    f(i,n)
    f(j,n)
    f(k,n) {
        if (x[k]==0) continue;
        s2.push_back((x[i]+x[j])*x[k]);
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    f(i,s1.size()) {
        lo=lower_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        hi=upper_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        res+=(hi-lo);
    }
    printf("%lld\n",res);
    return 0;
}
