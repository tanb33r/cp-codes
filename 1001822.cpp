#include <bits/stdc++.h>
using namespace std;
int c;

int rev(int n)
{
    int p=0;
    int temp = n;
    while(temp)
    {
        p=p*10+temp%10;
        temp/=10;
    }
    return p;
}

int pal(int n)
{
    int p = rev(n);
    int sum = p+n;
    if(sum==rev(sum))
    {
        c++;
        return sum;
    }
    else
        c++,p = pal(sum);
}

int main()
{

    int a,t,n,i;
    cin>>t;
    while(t!=rev(t))
    {
        cout<<t<<" "<<rev(t)<<" "<<rev(t)+t<<endl;
        t= rev(t)+t;
    }
}

