#include<bits/stdc++.h>
using namespace std;
int a[2][100003];
int main() {
    int f=0,n,q;
    cin>>n>>q;
    while(q--) {
        int x,y;
        cin>>x>>y;
        int b=a[x-1][y-1]?-1:1;
        f+=b*(a[2-x][y-2] + a[2-x][y-1] + a[2-x][y]);
        a[x-1][y-1]^=1;
        cout<<(f?"No":"Yes")<<"\n";
    }
}
