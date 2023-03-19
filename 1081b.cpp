#include <bits/stdc++.h>

using namespace std;
#define maxn 100010

int n,a[maxn],b[maxn],t[maxn],num[maxn];

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i],a[i]=n-a[i],t[a[i]]++;

    for(int i=1; i<=n; i++)
        if(t[i]%i!=0)
            return puts("Impossible"),0;

    int cnt=0;
    puts("Possible");
    for(int i=1; i<=n; i++)
    {
        if(t[a[i]]%a[i]==0)
            num[a[i]]=++cnt;

        t[a[i]]--;
        printf("%d ",num[a[i]]);
    }


    return 0;
}
