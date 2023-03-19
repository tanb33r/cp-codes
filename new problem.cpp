#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {

    int n;
    cin>>n;
    map<string, int> arr;

    for(int i =0; i<n; i++) {
        string s ; // "bangladesh"
        cin>>s;
        arr[s]++;
    }
    // going through loop
    for(auto i : arr) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    string winner;
    int ma=0 ;
    // finding out maximum
    for(auto i : arr) {
        if(ma<i.second) {
            ma = i.second;
            winner = i.first;
        }
    }
    cout<<winner<<endl;

}

 /*
    5
    bangladesh
    india
    bangladesh
    australia
    bangladesh


    australia 1
    bangladesh 3
    india 1
    */
