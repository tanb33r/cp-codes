#include <bits/stdc++.h>
using namespace std;
void reduceFraction(int x, int y)
{
    int d;
    d = __gcd(x, y);
    x = x / d;
    y = y / d;
    cout << x << " " << y << "\n";
}
void solve() {
    int a,b,m=0,k=0,ans=0,cnt=0;
    string s;
    cin>>a>>b;
    a = a*b;
    b--;
    reduceFraction(a,b);

}

int main() {
   ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}
