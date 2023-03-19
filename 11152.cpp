#include <bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main()
{
    double a,b,c,s,r,rose,m,violets,sunflowers,R,tr,outer_tri;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2;
        tr=sqrt(s*(s-a)*(s-b)*(s-c));
        r=tr/s;
        rose= PI*(r*r);
        violets=tr-rose;
        R=(a*b*c)/(4*tr);
        sunflowers=(PI*R*R)-tr;
        printf("%.4lf %.4lf %.4lf\n",sunflowers,violets,rose);
    }
    return 0;
}
