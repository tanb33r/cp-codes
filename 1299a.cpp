#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int a[100010];
int main()
{
    int n,i,j,cnt,k,t;
    scanf("%d",&n);
    for(i=1; i<=n; i++)scanf("%d",&a[i]);
    for(j=30; j>=0; j--)
    {
        cnt=0;
        for(i=1; i<=n; i++)
            if((a[i]>>j)&1)cnt++,k=i;
        if(cnt==1)break;
    }
    if(cnt==1) swap(a[1],a[k]);
//    printf("%d",a[1]);
    for(i=1; i<=n; i++)printf("%d ",a[i]);
    printf("\n");
}
