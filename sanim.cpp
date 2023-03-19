#include <iostream>
using namespace std;

void solve()
{
    long long n, d = 0, count = 0;
    cin>>n;
    long long a[n];
    for (int i = 0; i<n; i++)
    cin>>a[i];
    for (int i = 0; i<n-1; i++) {
        d = 0;
        if(a[i+1]<a[i])
        {
            d = a[i] - a[i+1];
            a[i+1] = a[i];
            count = count + d;
        }
    }
    cout<<count<<endl;
}
int main()
{
    solve();
}
