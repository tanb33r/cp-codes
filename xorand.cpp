#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

// Function to return the
// maximum xor
int max_xor(int arr[], int n) {
    int maxx = 0, mask = 0;

    set<int> se;

    for (int i = 30; i >= 0; i--) {
        mask |= (1 << i);

        for (int i = 0; i < n; ++i) {
            se.insert(arr[i] & mask);
        }

        int newMaxx = maxx | (1 << i);

        for (int prefix : se) {

            if (se.count(newMaxx ^ prefix)) {
                maxx = newMaxx;
                break;
            }
        }
        se.clear();
    }
    return maxx;
}

int main() {
    int n ;
    cin>>n;
    int  arr[n];
    f(i,n) cin>>arr[i];
    cout << max_xor(arr, n) << endl;

    return 0;
}
