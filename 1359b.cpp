#include <bits/stdc++.h>
#define  w(t)               int t; cin>>t; while(t--)
using namespace std;
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    w(t) {
        int n, m,x, y;
        cin>>n>>m>>x>>y;
        string s;
        int dt = 0,wt=0 ;
        if(x*2<y) y = 2*x;
        int ans=0;
        for(int i=0; i<n; i++)
            cin>>s;
            for(int j=0; j<s.size(); j++)
                if(s[j] == '.')
                    if(j!= s.size()-1 and s[j+1] == '.')
                        ans+=y;
                    else
                        ans+=x;
        }
        cout<<ans<<"\n";
    }
}






