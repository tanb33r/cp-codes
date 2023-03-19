#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p[10000];
    cin>>t;
    while(t--)
    {
        //cout<<p[-2];
        cin>>n;
        p[0]=p[1]=p[2]=p[3]=p[4]=1000;
        for( int i=5; i<n+5; i++)
            cin>>p[i];

        int coun=0;
        for( int i=5; i<n+5; i++)
        {
            int flag=0;
            for( int j=i-1; j>=i-5 ; j--)
            {
                if(p[i]>=p[j])
                {
                    flag=1;
                    break;
                }

            }
            if(flag==0)
                coun++;
               //   cout<<coun<<"c"<<endl;
        }
        cout<<coun<<endl;
    }
}

/*

7
12 11 12 15 12 14 11 10

*/
