#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005],b[200005], l[200005], r[200005], d[200005], c[200005];
int main()
{
    ll n,m,k;
    cin >> n >> m >> k;
    ll  i,j;
    for(i = 1;i <= n;i++) cin >> c[i];
    for(i = 1;i <= m;i++) cin >> l[i] >> r[i] >> d[i];
    for(i = 1;i <= k;i++)
    {
        ll x,y;
        cin >> x >> y;
        b[x]++;
        b[y + 1]--;
    }
    ll s = 0;
    for(i = 1;i <= m;i++)
    {
        s += b[i];
        a[l[i]] += s * d[i];
        a[r[i] + 1] -= s * d[i];
    }
    ll ans = 0;
    for(i = 1;i <= n;i++)
    {
        ans += a[i];
        cout << ans + c[i] << " ";
    }
}

