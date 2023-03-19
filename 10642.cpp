#include <bits/stdc++.h>
#define ll long long int
#define SIZE 200001
using namespace std;
ll an[SIZE];

int main()
{
    ll i,a,m,t,x,y,x2,y2,t2=0;


    for(i =1; i<=SIZE; i++)
    {
        an[i]+=an[i-1]+i;
       // cout<<an[i]<<" "<<i<<endl;
    }

    cin>>t;
    while(t--)
    {
        cin>>x>>y>>x2>>y2;
        a=(an[y2+x2]+x2)-(an[y+x]+x);
        cout<<"Case "<<++t2<<": "<<a<<endl;
    }
}
