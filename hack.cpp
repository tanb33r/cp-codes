#include<bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

int main() {
    Fast;
    int t;
    cin>>t;

//    freopen("output.txt", "r", stdin);
//    freopen("hack.txt", "w", stdout);
    while(t--) {
        long long n,ans=0LL;
        cin>>n;
        n=n/2;
        long long x=1LL,y=8;
        while(n--) {
            ans=ans+(y*x*x);
            x++;
        }
        cout<<ans<<"\n";
    }

}
