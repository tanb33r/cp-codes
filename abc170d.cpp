#include <bits/stdc++.h>
#define f(i, n) for(ll i=0;i<n;i++)
using namespace std;

const long long INF = 2LL << 60;
using ll = long long;
using P = pair<ll, ll>;
int main() {
    ll n, ans, m;
    ans=0;
    cin >> n;
    vector<ll> a(n);
    f(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    m=a[n-1];
    vector<ll> b(m+1);

    f(i,n)
    for(int j=1; a[i]*j<=m; j++)
        b[a[i]*j]++;

    f(i,n)
    if(b[a[i]]==1)
        ans++;

    cout << ans << endl;
}

