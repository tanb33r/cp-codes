#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>t;
    while(t--) {
        cin>>n;
        int count_check=n;
        int max_check=n;
        int arr[n];
        vector<int>arr2;
        arr2.push_back(n);
        bool arr_check[n]= {0};
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        for(int j=n-1; j>=0; j--) {
            if(arr_check[max_check] == true) {
                max_check--;
                j++;
                continue;
            }

            // 4 2 1 3 6 5
            // 0 1 2 3 4 5  6


            arr_check[arr[j]] = true;

            if(arr[j]==max_check) {
                arr2.push_back(j);
                max_check--;
            }
        }
        for(int i = 1; i<arr2.size(); i++) {
            for(int j = arr2[i]; j<arr2[i-1]; j++) {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;

    }
}
