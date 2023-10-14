#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,t,t2=0,x,y,k;
    string s;
    while(cin>>s) {
        cin>>t;
        t2++;
        cout<<"Case "<<t2<<":"<<endl;

        while(t--) {
            int c=0;
            cin>>x>>y;
            if(x>y) swap(x,y);
            char a = s[x];

            for(i = x; i<=y; i++)
                if(s[i]!= a) {
                    c++;
                    break;
                }

            if(c)
                cout<<"No\n";
            else
                cout<<"Yes\n";
        }
        s.clear();
    }
}
