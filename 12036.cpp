#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t2=1,i,j;
    cin>>t;
    while(t--)
    {
        int x[100][100],y[101];
        int n,m=0;
        memset(y,0,sizeof(y));
        cin>>n;
        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
            {
                cin>>x[i][j];
                y[x[i][j]]++;
            }
        for(i=0; i<n; i++)
            if(y[i]>n)
                m=1;
        cout<<"Case "<<t2++<<": ";
        if(!m)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
