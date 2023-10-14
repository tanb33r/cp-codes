#include<bits/stdc++.h>
using namespace std;
void solve() {

    int n;
    cin>>n;
    int sum=0;

    vector<int>v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2==0) {
        cout<< 0 <<'\n';
    } else {
        int a=100000;
        for(int i=0; i<n; i++) {
            int cnt=0;
            if(v[i]%2 == 0) {
                while(v[i]!=1) {
                    v[i]=v[i]/2;
                    cnt++;
                }
            }

            else {
                while (v[i]%2!=0) {
                    v[i]=v[i]/2;
                    cnt++;
                }
            }
            if(cnt!=0) {
                a=min(a,cnt);
            }
        }
        cout<<a<<'\n';

    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--) {
        solve();
    }
}







