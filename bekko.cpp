#include <bits/stdc++.h>
using namespace std;
int main() {
    string st="hello";
    int i,m[200]= {0};
    for(i=0; i<st.size(); i++) {
        m[st[i]]++;
    }
    for(i=0; i<st.size(); i++) {
        if(m[st[i]] > 0) {
            cout<<st[i]<<" "<<m[st[i]]<<"\n";
            m[st[i]] = 0;
        }
    }
}
