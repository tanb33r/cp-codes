#include <bits/stdc++.h>

typedef long long ll;
#define  f(i,n) for(ll i=0; i<n; i++)
#define  ff(i,j,n)  for(ll i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%lld",&i)
#define  pf(i) printf("%lld",i)
#define pb(x) push_back(x);
#define in(x) ll x; sf(x);
#define w(t)  ll t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl  "\n"
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
using namespace std;

int main()
{
    w(t)
    {

        in(n);
        ll a[n],b;
        map<ll,ll> m;
        f(i,n)
        {
            sf(a[i]);
            m[a[i]]++;
        }

        ll flag = 0;
        ll c = 0;
        for(auto i : m)
            if(i.second == 2)
                c++;

//        ll c2=0;
//        for(auto i: m)
//        {
//            if(c2==c)
//                break;
//            c2++;
//            if(i.second!=2)
//                flag =1;
//
//        }
        ll s=0,e=0;
        f(i,c)
        s+=a[i];
        for(ll i = n-1 ; i>=n-c ; i--)
            e+=a[i];

        ll f = c*(c+1)/2;
        ll x=0;
        if(f == e)
            x++;
        if(f == s)
            x++;

        if(x==0 || c==0)
        {
            cout<<0<<endl;
        }
        else if(x == 2)
        {
            d(x);
            cout<<n-c << " "<<c<<endl;
            cout<<c << " "<<n-c<<endl;
        }
        else if(x == 1 && f==e)
        {
            d(x);
            cout<<n-c << " "<<c<<endl;
        }
        else if(x == 1 && f==s)
        {
            d(x);
            cout<<c << " "<<n-c<<endl;
        }
    }
}

/*
1
5
1 4 3 2 1
*/
