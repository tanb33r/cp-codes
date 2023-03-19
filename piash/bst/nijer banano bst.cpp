#include<bits/stdc++.h>
#include <fstream>
#include"Node.h"

#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long

using namespace std;

vector<string> vs;

int main() {
    BST *Dictionary = new BST;
    ifstream in("in.txt");
    streambuf *cinbuf = cin.rdbuf();
    cin.rdbuf(in.rdbuf());

    ofstream out("out.txt");
    streambuf *coutbuf = cout.rdbuf();
    cout.rdbuf(out.rdbuf());
    for(int i =0; i<100; i++) {
        string s,m;
        cin>>s>>m;
        Dictionary->root = Dictionary->Insert(Dictionary->root,s,m);
    }
//    Dictionary->preOrder(Dictionary->root);

//    Dictionary->search_by_meaning(Dictionary->root,"required");
    Dictionary->SearchMeaning(Dictionary->root,"journey");

}








