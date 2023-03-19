#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int a[3][3],b[3]= {},i,j,ii,jj,x;
    vector<int> v;


    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            cin>>a[i][j];
            b[i]+=a[i][j];
        }


    int p =0;
    for(i=0; i<3; i++)
        p = max(p,b[i]);



    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {

            if(x<=a[i][j])
            {
                x=a[i][j];
                ii=i;
                jj=j;
            }

        }






    int r = 0;






    /*
            b[0][0]=a[1][0]+a[2][0];
            b[1][0]=a[0][0]+a[2][0];
            b[2][0]=a[0][0]+a[1][0];

            b[0][1]=a[1][1]+a[2][1];
            b[1][1]=a[0][1]+a[2][1];
            b[2][1]=a[0][1]+a[1][1];

            b[0][2]=a[1][2]+a[2][2];
            b[1][2]=a[0][2]+a[2][2];
            b[2][2]=a[0][2]+a[1][2];

             i=0;
             while(i!=3)
             {
                 j=0;
                 while(j!=3)
                     cout<<b[i][j]<<" ",j++;
                 i++;
                 cout<<endl;
             }
            x = b[0][0]+b[1][1]+b[2][2];
            v.push_back(x);
            m[x]="BGC";

            x = b[0][0]+b[2][1]+b[1][2];
            v.push_back(x);
            m[x]="BCG";

            x = b[1][0]+b[0][1]+b[2][2];
            v.push_back(x);
            m[x]="GBC";

            x = b[1][0]+b[2][1]+b[0][2];
            v.push_back(x);
            m[x]="CBG";

            x = b[2][0]+b[0][1]+b[1][2];
            v.push_back(x);
            m[x]="GCB";

            x = b[2][0]+b[1][1]+b[0][2];
            v.push_back(x);
            m[x]="CGB";


            sort(v.begin(),v.end());
            cout<<m[v[0]]<<" "<<v[0]<<endl;
            v.clear();
    */

}
