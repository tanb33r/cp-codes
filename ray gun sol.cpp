#include <bits/stdc++.h>
#define f(i,a,b) for(int i = (a); i <= (b); i++)

typedef long long ll;
using namespace std;

const int con = 1000000;
bool Ignore[con+5];
int F[con+5], T;
ll A, B;

inline ll cnt(ll x) {
    if(F[x]&1) return - (B/x)*(A/x);
    else return (B/x)*(A/x);
}
int main() {
    f(i,2,con)
    if(!F[i])
        for(int k = i; k <= con; k += i)
            F[k]++;

    f(i,2,1000)
    for(int k = i*i; k <= con; k += i*i)
        Ignore[k] = true;

    cin >> T;

    f(tt,1,T) {
        cin >> A >> B;
        if(A > B) swap(A,B);

        if(A == 0) {
            if(B > 0) cout << "Case " << tt << ": 1\n";
            else cout << "Case " << tt << ": 0\n";
            continue;
        }

        ll ans = 0;
        f(i,1,A) if(!Ignore[i]) ans += cnt(i);
        cout << "Case " << tt << ": " << ans + 2 << "\n";
    }
}
