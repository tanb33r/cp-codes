#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)        cin >> a[i];

    long long sum1 = 0, sum3 = 0, ans = 0;

    int i = 0, j = n - 1;

    while (i < j) {
        if(sum1 <= sum3)
            sum1 += a[i],i++;
        else
            sum3 += a[j],j--;
        if (sum1 == sum3) ans = max(ans, sum1);

    }

    cout<<ans<<"\n";
}
