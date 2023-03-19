
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string a;
    ll int n,ok;

    int t;

    scanf("%d",&t);

    for(int ca=1; ca<=t; ca++)
    {
        cin>>n>>a;

        ok=0;

        if(a=="Alice")
        {
            if((n-1)%3==0)
                ok=1;
        }
        else
        {
            if(n%3==0) ok=0;
            else ok=1;
        }

        if(ok) printf("Case %d: Bob\n",ca);
        else printf("Case %d: Alice\n",ca);
    }


}
