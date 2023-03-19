#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll mx[n];
        ll mn[n];

        ll m1=0,m2;

        for(ll i =0 ; i< n; i++)
        {
            cin>>a[i];
            mx[i]=m1;
            m1=max(mx[i],a[i]);
            mn[i]=a[i];
        }
        ll ans =0;
        //mn[n-2]=mn[n-1];
        m2=mn[n-1];

        for(ll i =n-2 ; i>0; i--)
        {
            mn[i]=m2;
            m2=min(mn[i],a[i]);
            if(mx[i]<=a[i] && mn[i]>=a[i])
                ans++;
        }
        // mn[n]=0;


        //  cout<<"  ";
       /* for(ll i =0 ; i< n; i++)
            cout<<mx[i]<< " ";
        cout<<"\n";
        for(ll i =0 ; i< n; i++)
            cout<<mn[i]<< " ";
        cout<<" \n";
*/
        cout<<ans<<endl;
    }
}



/*
1
8
2 1 3 4 6 5 7 9

*/





