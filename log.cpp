
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 0;
    int ans = (__lg(n)) + ( __builtin_popcount(n)>1);
    cout<<ans;
}
