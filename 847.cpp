#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    while(cin >> n)
    {
        ll p = 1;
        int i = 1;
        while(p<n)
        {
            if(i%2 == 1)
                p = p*9;
            else
                p = p*2;
            if(p>=n)
                break;
            i++;
        }
        if(i%2 == 1)
            cout << "Stan wins." << endl;
        else
            cout << "Ollie wins." << endl;
    }
    return 0;
}
