#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n;

    while(cin>>n&&n!=0)
    {
        int i,j,a[n][n];

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                cin>>a[i][j];

        int r[n]= {0};
        int c[n]= {0};

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(a[i][j])
                    r[i]++,c[j]++;
        int br=0,bc=0;
        int a1,a2;

        for(i=0; i<n; i++)
        {
            if(r[i]&1) br++,a1=i;
            if(c[i]&1) bc++,a2=i;
        }
        if(br+bc==0)
            cout<<"OK"<<endl;
        else if(br==1 && bc==1)
            printf("Change bit (%d,%d)\n",a1+1,a2+1);
        else
            cout<<"Corrupt"<<endl;
    }
}









