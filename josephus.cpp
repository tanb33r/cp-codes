#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  f(i) for(int i=0; i<100; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int main()
{
    int t=42;
//    int c2=1;
    int n=1;
    while(t--)
    {
//    cin>>t;
        int a[] = {1,2,3,4,5,6,7,8};
//        int n=9;
        int c2=10;
        vector<int> b(n,1);
        int l=1;
        int c = c2;
        for(int i = 0 ; l<n ; i++)
        {
            if(i>=n)
                i-=n;
            if(b[i])
                c--;
            if(c==0)
                b[i] = 0,c=c2,l++;
        }
        cout<<n<<" ";

        f(i,n)
        if(b[i])
            cout<<i+1<<" ";
//        c2++;
        cout<<"\n";

        n++;
    }
}
