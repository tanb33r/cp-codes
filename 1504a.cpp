#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  prrrr(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x)
#define  print(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  fast               ios::sync_with_stdio(0),cin.tie(0)
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

bool AAAAA(string s) {
    f(i,s.size())
        if(s[i]!='a') return 0;

    return 1;
}

bool isp(string s) {
    string s2 = s;
    reverse(s2.begin(),s2.end());
    return s==s2;
}
void sol() {
    int n,m,k,ans=0;
    string s;
    cin>>s;
    if(AAAAA(s))
        prrrr(NO);

    else if(isp(s)) {
        prrrr(YES);
        s+='a';
        print(s);

    } else {
        prrrr(YES);
        f(i,s.size()) {
            if(s[i]!='a') {
                s.insert(s.size()-i,"a");
                break;
            }
        }
        print(s);
    }
}

int main() { cout<<"asd";
    int t=1;
    cin>>t;
    while(t--)
        sol();
}
