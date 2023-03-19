#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char s[n][m];
    char c,x='B';
    f(i,n)
    {
        if(i&1)
            x='W';
        else
            x='B';
        f(j,m)
        {
            cin>>c;
            if(c == '.')
                s[i][j] = x;
            else
                s[i][j] = '-';

            if(x == 'B')
                x='W';
            else
                x = 'B';
        }
    }
    f(i,n)
    {
        f(j,m)
        cout<<s[i][j];
        cout<<"\n";
    }
}
