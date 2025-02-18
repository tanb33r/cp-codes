#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
typedef long long Long;

using namespace std;


while(r - l > 1)
{
    int m = (l + r) / 2;
    if(check(m, x, a))
        l = m;
    else r = m;
}
ans += check(ans+1) && ans+1<=limit; // important



int ans=l;
int l=0, r=n;
while(l<=r)
{
    int mid=(l+r)/2;
    int num=0;

    if(check(m))
    {
        l=mid+1;
    }
    else r=mid-1;
}




int binarySearch(int left, int right, ll target,int arr[])
{
    if (right < left )
        return -1; // -1 = target value doesn't exist

    int mid = left + (right-left)/2;

    if (arr[mid] == x)
        return mid;

    if (arr[mid] < target)
        return binarySearch(mid+1, right, target, arr);
    else
        return binarySearch(left, mid-1, target, arr);
}

int main()
{

    int arr[] = {1, 8, 14, 15, 26, 37, 48, 49, 59, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 59;
    int left = 0, right = n-1;
//    while(right > left) {
//        int middle = (left + right) / 2; // divide in middle
//        if(arr[middle] <= target)
//            left = middle;
//        else
//            right = middle - 1;
//    }

    int ans = binarySearch(left, right, target, arr);

    if(arr[ans] != target)
        cout<<"The number doesn't exist\n";
    else
        cout<<ans<<'\n';
}






