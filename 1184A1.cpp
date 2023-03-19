#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r;
    cin>>r;
    (r&1 && r > 3)? cout<<1<<" "<<(r-3)/2<<endl: cout<<"NO"<<endl;
}

