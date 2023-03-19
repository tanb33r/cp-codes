
#include <bits/stdc++.h>
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
using namespace std;


void solve() {
    int n,m ;
    cin>>n>>m;
    char a[n][m];
    char b[n][m];
    char c[n][m];
    for(int i=0 ; i<n; i++)
        for(int j = 0 ; j<m ; j++)
            cin>>a[i][j];

    bool co = 0;
    for(int i=0 ; i<n; i++) {
        for(int j = 0 ; j<m ; j++) {
            if(i%2 == j%2)
                b[i][j] = 'R',c[i][j] = 'W';
            else
                b[i][j] = 'W',c[i][j] = 'R';
        }
    }


    int flag = 1;
    for(int i=0 ; i<n; i++) {
        for(int j = 0 ; j<m ; j++) {
            if(a[i][j] != '.') {
                if(a[i][j] !=b[i][j]) {
                    flag = 0;
                    break;
                }
            }
        }
    }




    if(flag == 1) {
        cout<<"YES\n";
        for(int i=0 ; i<n; i++) {
            for(int j = 0 ; j<m ; j++) {
                cout<<b[i][j];
            }
            newl;
        }
        return;
    }

    flag = 1;
    for(int i=0 ; i<n; i++) {
        for(int j = 0 ; j<m ; j++) {
            if(a[i][j] != '.') {
                if(a[i][j] != c[i][j]) {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag) {
            ps(YES);
            for(int i=0 ; i<n; i++) {
                {
                    for(int j = 0 ; j<m ; j++) cout<<c[i][j];
                    newl;
                }
                return;
            }


            cout<<"NO\n";

        }


    }
}
int main() {

    int t=1;
    cin>>t;
    while(t--)
        solve();

}
