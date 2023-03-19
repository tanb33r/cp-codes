#include <bits/stdc++.h>
using namespace std;
int main() {

    ios::sync_with_stdio(0),cin.tie(0);
    int n ;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    int i = 0,j=1,MAX=1;
    while(j<n)
        (a[j]-a[i]<=5) ? MAX = max(MAX,(j++)-i+1):i++;
    cout<<MAX<<endl;
}
