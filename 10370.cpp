#include <bits/stdc++.h>
using namespace std;
int a[1001];
int main()
{
    int c;
    double x=0,y=0;
    cin>>c;
    while(c--)
    {
        x=0,y=0;
        int n;
        cin>>n;
        if(n==0)
            continue;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            x+=a[i];
        }
        x/=(double)n;
        for(int i =0;i<n;i++)
        {
            if(a[i]>x)
                y++;
        }
        y/=(double)n;
        y*=100000;
        y = round(y);
        y /= 1000;
        printf("%.3f%%\n",y);
    }
}
