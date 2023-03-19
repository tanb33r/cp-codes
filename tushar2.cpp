#include <bits/stdc++.h>

using namespace std;
int main() {
    long long n;
    cin>>n;
    long long a[n];
    for(int i = 0; i<n ; i++) {
        cin>>a[i];
    }
    long long x;
    cin>>x;

    int ans = 0,i = 0, j = 1;

    for(int i = 0; i<n ; i++) {
        long long  sum=a[i];
        for(int j = i+1; j<n ; j++) {
            sum+=a[j];
            if(sum==x)
                ans = max(ans,j-i+1);
        }
    }
    cout<<ans<<"\n";
}
