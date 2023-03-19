#include <bits/stdc++.h>

using namespace std;

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"

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
//    replace 1 with 8
//    replace(v.begin(), v.end(),1,8); // 8 2 3



    // Replaces 1 character from 12th  index of s4 with
    // 3 copies of '!'
    string s4 = "HeyWorld !";
    s4.replace(3, 1, 3, '!');
    cout << s4 << endl;





//    arrp(v,3) ;
}
