#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
typedef long long Long;

using namespace std;

int BS(int lo, int hi, Long x,int a[])
{
    if (hi < lo )
        return 0;
    int mid = lo +(hi-lo)/2 ;
    if (a[mid] > x)
        return BS(lo, mid-1, x, a);

    else if ( a[mid] < x )
        return BS(mid+1, hi, x, a);

    else
        return 1 + BS(lo, mid-1, x, a) + BS(mid+1, hi, x, a);
}

int main()
{
    int a[] = {1,2,3,3,3,3,3,4};
    int x = BS(0,7,3,a);
}






