#include <bits/stdc++.h>
#define  f(i,n) for(i=0; i<n; i++)

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[100000] ;
        char s2[100000] ;
        cin>>s1;
        int t2;
        cin>>t2;
        while(t2--)
        {
            cin>>s2;
            char* p = strstr(s1, s2);

            if (p)
                cout << "y" << endl;
            else
                cout << "n" << endl;
        }
    }


}
