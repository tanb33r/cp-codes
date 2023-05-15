#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n, k,k2;
        cin>>n>>k;
        k2 = k;
        int a[n];
        for(int i = 0 ; i<n ; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        int i = 0;
        int j = n-1;
        int cnt = 0;
        while(k--) {
            int sum = a[i]+a[i+1];
            int sum2 = a[j];
            if(sum>sum2)
                j-- ;
            else cnt++,i+=2;
        }
        long long ans = 0;
        long long sum = 0;
        long long sum2 = 0;

        for(; i<=j; i++) {
            sum+=a[i];
        }
        for(int l = k2*2 ; l<n; l++)
            sum2+=a[l];

        ans = sum2;
        i = k2*2;
        j = n-1;
        while(k2--) {
            sum2-=a[j];
            sum2+=(a[i-1]+a[i-2]);
            j--,i-=2;
            ans = max(sum2,ans);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
