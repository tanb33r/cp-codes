#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll>a(n);
        ll mx = INT_MIN;
        f(i,n)
        {
            cin >> a[i];
            if (i > 0)
                a[i] += a[i - 1];
            if (i < n - 1)
                mx = max(mx, a[i]);
//            cout << a[i]<< " "<<mx<<"\n";

        }
        for (int i = 0; i < n - 1; i++)
            mx = max(mx, a[n - 1] - a[i]);





        if (a[n - 1] > mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}


/*


10 10
10 5 -14 7 -7 20 30 -50 50 60


*/
