#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 2, 3, 4, 10,10,10,11, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
//    cout<<n<<"\n";

    int lb = lower_bound(arr,arr+n, 10) - arr;


    vector<int>v= { 2, 3, 4, 10,10,10,11, 40 };
    lb = lower_bound(v.begin(),v.end(), 5) - v.begin();
//    upper_bound
    cout<<lb<<endl;
}

