#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];

    int i = 0 , j = n - 1;

    while (i < j) {
        if (a[i] + a[j] == X)     {
            cout<<a[i]<<" "<<a[j];
            break;
        }
        else if (A[i] + A[j] < X) i++;
        else                      j--;
    }
}
