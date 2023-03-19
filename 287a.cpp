#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)

using namespace std;
int main()
{
    char a[4][4];
    f(i,4)
    f(j,4)
    cin>>a[i][j];

    int y=0;

    f(i,3)
    {

        f(j,3)
        {
            int x=0;
            if(a[i][j] == '.')
                x++;
            if(a[i+1][j] == '.')
                x++;

            if(a[i][j+1] == '.')
                x++;
            if(a[i+1][j+1] == '.')
                x++;

            if(x!=2)
                y++;

        }

    }


    if(y)
        cout<<"YES";
    else
        cout<<"NO";
}
