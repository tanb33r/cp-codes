#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  in(x)              int x ; cin>>x
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
namespace __input {
template <class T1, class T2> void re(pair<T1, T2> &p);
template <class T> void re(vector<T> &a);
template <class T, size_t SZ> void re(array<T, SZ> &a);

template <class T> void re(T &x) {
    cin >> x; }
void re(double &x) {
    string t;
    re(t);
    x = stod(t); }
template <class Arg, class... Args> void re(Arg &first, Args &...rest) {
    re(first);
    re(rest...); }

template <class T1, class T2> void re(pair<T1, T2> &p) {
    re(p.first, p.second); }
template <class T> void re(vector<T> &a) {
    for (auto &x : a) re(x); }
template <class T, size_t SZ> void re(array<T, SZ> &a) {
    for (auto &x : a) re(x); } }
using namespace __input;

int main() {
    int y = 4;
    int x= min({y,2,3,4,5});
    cout<<x; }
