// C++ code to find the number of integral points
// lying on the line joining the two given points
#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

int getCount(int x,int x1,int y,int y1)
{

    if (x==x1)
        return abs(y - y1) - 1;

    if (y == y1)
        return abs(x-y1) - 1;

    return gcd(abs(x-y1), abs(y-y1))-1;
}

int main()
{

    int t,ans,c;
    long int x,y,x1,y1;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>x1>>y1;
        if(x<0 or y<0 or x1<0 or y1<0)
        {
            long int m = min(x,x1);
            m = min(m,y1);
            m = min(m,y);
            x+=m;
            x1+=m;
            y+=m;
            y1+=m;
        }

        int ans =  getCount(x,x1,y,y1);
        cout<<ans+2<<"\n";
    }
}
