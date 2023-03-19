#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        int a[n];
//        map<int,int> mp;
        vector<int> v(n+1);
        for(int i=0; i<n; i++) {
            cin >> a[i];
            v[a[i]]++;
        }
//        for(auto it : mp) {
//            v.push_back(it.second);
//        }
        sort(v.begin(),v.end(),greater<int>());
        int curr = v[0];
        int sum = 0;
        for(auto it : v) {
            if(curr <= 0) {
                break;
            }
            if(it >= curr) {
                sum += curr;
                curr--;
            } else {
                curr = it;
                sum += curr;
                curr--;
            }
        }
        cout << sum << "\n";
    }
}
