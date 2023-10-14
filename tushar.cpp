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

    long long ans = 0,i = 0, j = 1;
    long long sum = a[0];
    while(j<n) {
        if(sum==x) {
            ans = max(ans,j-i);
            sum+=a[j];
            j++;
        } else if(sum<x) {
            sum+=a[j];
            j++;
        } else {
            sum-=a[i];
            i++;
        }

    }
    cout<<ans<<"\n";
}
