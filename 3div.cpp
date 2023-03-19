#include <bits/stdc++.h>
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
    w(t)
    {
        in(n);
        string s;
        string a;
        string b;


        cin>>s;
        int x=1;
        f(i,s.size())
        {
            if(s[i] == '2')
            {
                if(x)
                {
                    a+='1';
                    b+='1';
                }
                else
                {
                    a+='0';
                    b+='2';
                }
            }
            else if(s[i] == '0')
            {
                a+='0';
                b+='0';
            }
            if(s[i] == '1')
            {
                if(x)
                {
                    a+='1';
                    b+='0';
                    x=0;
                }
                else
                {
                    a+='0';
                    b+='1';
                }
            }
        }
        d(a);
        d(b);
    }
}

