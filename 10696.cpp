#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    while(cin>>n,n)
    {
        if(n<101)
            t=91;
        else
            t = n-10;
        cout<<"f91("<<n<<") = "<<t<<endl;
    }
}
