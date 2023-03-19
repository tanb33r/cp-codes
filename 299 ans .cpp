#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n,t[50];

    cin>>tc;

    while(tc--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>t[i];


        int ans = 0;
        bool sw;
        for(int i=0; i<n; i++)
        {
            sw = true;
            for(int j=1; j<n-i; j++)
                if(t[j]<t[j-1])
                {
                    swap(t[j],t[j-1]);
//                    int temp = t[j];
//                    t[j] = t[j-1];
//                    t[j-1] = temp;
                    ans++;
                    sw = false;
                }

            if(sw) break;
        }
        printf("Optimal train swapping takes %d swaps.\n",ans);
    }
}
