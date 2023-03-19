#include<bits/stdc++.h>
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d",n)
using namespace std;

int main()
{
    int i,l,m,n,h;
    while(sf(h))
    {
        if(h==0)
            break;
        sf(l);
        int x[l+1];
        int c= 10e4+1;

        for(int i=0; i<l; i++)
        {
            sf(x[i]);
        }
        x[l]=h;
        c=0;
//        cout<<c<<"  c  \n";
        int h2 = h;

        while(h2)
        {
            int s=0;
            bool d = 0;
            for(int i=l; i>=0; i--)
            {

                if(!d && h2<=x[i])
                    d=1;
                if(d and h2>x[i])
                {
                    c++,d=0;
//                    cout<<x[i]<<"  x \n";
                }
            }
            h2--;
        }
        pf(c);
        printf("\n");

    }
}
