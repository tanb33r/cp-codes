#include <bits/stdc++.h>

using namespace std;

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
#define  deb(x)             cerr<<(#x)<<" ="<<x<<"\n"
#define dbg(g)                      ({ if(DEBUGGER)cout<<#g<<" ="<<g<<endl; })
int DEBUGGER = 1;
int main() {
    int a = 4, b = 8, c = 9;
    error(a,b,c);
    string x = "aaaaaad";
    vector<int> v = {1,2,3};
    replace(x.begin(), x.end(),'a','\0');

    deb(x);
}
