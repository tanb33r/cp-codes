#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
using namespace std;
int main() {

    while(1) {
        string s,s2="-";
        getline(cin,s);
        f(i,s.size()) {
            char c = tolower(s[i]);
            if((c >='a' and c<='z') or (c>='0' and c<='9')) s2 += c;
            s2 +=  c ==' '?"-":"";
        }

        cout<<"/ICSCR- ";
        cout<<s2<<'\n';
    }
}
