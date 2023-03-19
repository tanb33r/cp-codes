#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    w(t)
    {
        string  s;
        cin>>s;
        int j=0,z=0,x= 0 ;
        sort(s.begin(),s.end());
        if(s[0] == '0')
            j++;

        if(j)
            ff(i,1,s.size())
            {
                if(s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '0')
                    z++;
                x+= (int)s[i];
            }

        if(j && z && x%3==0)
            cout<<"red\n";
        else
            cout<<"cyan\n";

    }
}



















