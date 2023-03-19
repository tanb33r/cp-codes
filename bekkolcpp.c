#include <bits/stdc++.h>

using namespace std;

int main() {

    String st="hello"
    m[100]= {0};
    For(i=0; i<st.size(); i++) {
        m[st[i]]++;
    }
    For(i=0; i<st.size(); i++) {
        if(m[st[i]] > 0) {
            cout<<st[i]<<" ";
            m[st[i]] = 0;
        }
    }
