#include <bits/stdc++.h>
using namespace std;
int main() {
    int x = 157;
    int arr[] = {2,1,47,4,8,36,4,0,11,4,74,83,6,4,0};
    int n = 15;

    for(int i =0 ; i<15; i++)  cout<<arr[i]<<" ";
    cout<<"\n";
    reverse(arr,arr+15);
    for(int i =0 ; i<15; i++)  cout<<arr[i]<<" ";
    cout<<"\n";
}

