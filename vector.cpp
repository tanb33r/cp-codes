
#include <bits/stdc++.h>

using namespace std;
void printc(vector<char> v) {
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}
void print(vector<int> v) {
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}
int main() {
    vector<int> v;
//    vector<char> c= {'a','b','c','d'};
    string c = "abcd";
    for (int i = 0; i <= 4; i++)
        v.push_back(i);
    cout<<v.size()<<"\n";
    cout<<v.back()<<"\n";
//
//    print(v);
//    v.pop_back();
//    print(v);
//    reverse(v.begin(),v.end());
//
    cout<<c<<endl;
    next_permutation( c.begin(), c.end() );
    cout<<c<<endl;
    next_permutation( c.begin(), c.end() );
    cout<<c<<endl;
    next_permutation( c.begin(), c.end() );
    cout<<c<<endl;
    next_permutation( c.begin(), c.end() );
    cout<<c<<endl;
    next_permutation( c.begin(), c.end() );
    cout<<c<<endl;
    next_permutation( c.begin(), c.end() );
    cout<<c<<endl;
    next_permutation( c.begin(), c.end() );
    cout<<c<<endl;
    next_permutation( c.begin(), c.end() );
//    next_permutation( c.begin(), c.end() );

}
