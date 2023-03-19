#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,max=0,count=1,n,p;
    cin>>i>>j;
    cout<<i<<" "<<j<<" ";
    while(i<=j)
    {
        count=1;
        n=i;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            if(n%2!=0)
            {
                n=3*n+1;
            }
            count++;
        }
        if(max<count)
        {

            max=count;
        }
        i++;

    }
    cout<<max<<endl;

    return 0;
}
