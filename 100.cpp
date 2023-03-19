#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,c,n;
    while(cin>>i>>j)
    {
        cout<<i<<" "<<j<<" ";
        m = 0;
        if(i>j)   swap(i,j);
        while(i<=j)
        {
            c=1;
			n = i;
            while(n!=1)
            {
                (n&1)?n=3*n+1:n/=2;
                c++;
            }
            if(m<c)   m=c;
            i++;
        }
        cout<<m<<endl;
    }
}
