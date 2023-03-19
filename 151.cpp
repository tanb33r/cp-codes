#include<bits/stdc++.h>
using namespace std;



int c(int x,int m)
{
    int a[x]= {};

    int xx=x-2;
    int i = 0;
    int i2=1;
    a[0] = 1;

    while(xx--)
    {
        int m2=m;
        while(m2)
        {
            i++;

            if(i>=x)
                i%=x;

            if(a[i] == 0)
                m2--;
        }
        a[i]=1;

}

    if(a[12] == 0)   return 1;
    else           return 0;

}
int main ()
{
    int x;
    while(cin>>x,x)
    {
       // x=17;
        int m;
        m=1;

//        c(x,m);
        while(c(x,m)!=1)
            m++;

        cout<<m<<"\n";
    }
}
