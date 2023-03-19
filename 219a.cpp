#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n,c[26] = {0};
    string s;
    cin>>n>>s;

    for(i=0; i<s.length(); i++)
        c[s[i]-'a']++;

    for(i=0; i<26; i++)
        if(c[i]%n!=0) {
            cout<<-1<<"\n";
            return 0;
        }

    if(s.length()<n)
        cout<<-1;
    else {
        i=s.length()/n;
        string a="";
        for(int i=0; i<26; i++) {
            int x=c[i]/n;
            while(x--)
                a+=i+'a';
        }
        while(n--)
            cout<<a;
    }
    cout<<"\n";
}
