#include<bits/stdc++.h>>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)

#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
using namespace std;
int main() {

    int a[4]= {};
    ff(i,-10,10)
    ff(j,-10,10)
    ff(k,-10,10)
    ff(m,-10,10)
    ff(n,-10,10)
    ff(l,-10,10) {
        if(i*j*m == n+k+l)
        if(i*j*l == n+m+l)
        if(i*k*m == n+j+l)
        if(i*l*m == n+j+k)
        if(j*k*m == n+i+l)
        if(j*l*m == n+i+k)
        if(k*l*m == n+j+i)
        if(i*j*n == m+k+l)
        if(i*k*n == m+j+l)
        if(i*l*n == m+j+k)
        if(j*k*n == m+i+l)
        if(j*l*n == m+i+k)
        if(k*l*n == m+j+i)
        debb(i,j,k,l,m,n);

    }
    return 0;
}
