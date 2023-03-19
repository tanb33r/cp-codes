#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  pb(x)              push_back(x);
#define  lin(x)             ll x; cin>>x
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
//int x
void solve() {
    int n;
    cin>>n;
    int a[n],t[n];
    bool b[n+10]= {0},c[n+10]= {0};
    vector<int> v;
    f(i,n) {
        cin>>a[i];
    }
    int k = n;
    for(int i=n-1; i>=0; i--) {
        if(b[k]==1) {
            k--;
            i++;
            continue;
        }
        b[a[i]] = 1;
        if(a[i]==k) {
            v.pb(i);
            k--;
        }
    }
    int l=0;
    int p=0;

    while(l<v.size()) {
        int j = v[l];
        while(j<n and c[j]!=1) {
            c[j]=1;
            t[p++]=a[j++];
        }
        l++;
    }
    ll ans=0;
    ll g=1;
    f(i,n) {
        cout<<t[i]<<" ";
    }
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

