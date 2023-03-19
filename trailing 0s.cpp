#include<bits/stdc++.h>
using namespace std;


int trails(int n) // calculates trailing 0s
{
    int ans=0,k=1;
    int     x = 5;

    while(x<=n)
    {
        ans+=n/x;
//                cout<<ans<<"\n";
        x=pow(5,++k);
        cout<<ans<<" "<<x<<"\n";

    }
    return ans;
}


int main()
{
//    std::ios_base::sync_with_stdio(0);
//    cin.tie(NULL);

    int t,n,n2,t2=1,i = 0;
    int x = 24/25;
    cout<<x;
    while(1)
    {
        cin>>n;
        n2=trails(n);
        cout<<n2<<"\n";
    }

}










