// INTEGER Example
// CPP program to illustrate
// Implementation of end() function
#include <iostream>
#include <set>
#define  deb(x)             cerr<<__LINE__<<"line  "<<(#x)<<" = "<<x<<"\n"
#define  newl cout<<"\n"
using namespace std;

int main() {
    // declaration of set container
    set<int> s{ 1, 2, 3, 4, 5 };
    s.erase(s.begin());
    int nxt = *next(s.begin(),0);

    // erase by index (0 based)

    for (auto it:s) cout<<' '<<it;
    newl;
    nxt = *next(s.begin(),2);
//    deb(nxt);
    s.erase(nxt);

    for (auto it:s) cout<<' '<<it;
    newl;
    s.erase(2);

    // erase by value

    for (auto it:s) cout<<' '<<it;
    newl;

    return 0;
}
