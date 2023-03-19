#include <bits/stdc++.h>
#include <stdio.h>
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
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,m;
    cin>>n;
    double x[n],y[n],yp[n];
    f(i,n) {
        cin>>x[i]>>y[i];
    }
    double N = .01;
    double w0=0,w1=0;
    int iter = 0;
    while(1) {
        int j =0;
        while(j<n) {

            double risu=0, risus=0;
            // risu = risuduals
            // risus = risuduals squared
            f(i,n) {
                yp[i] = w0+w1*x[i];
                risu  += (yp[i]-y[i]);
                risus  += (y[i] - yp[i])*(y[i] - yp[i]);
                deb(yp[i]);
            }

            w0 -= N*risu*(1.0/double(n));
            w1 -= N*risu*x[j]*(1.0/double(n));
            double mse = risus/n;
            double costf = mse/2;
            deb(w0);
            deb(w1);
            deb(mse);
            deb(risu);
            deb(risus);
            deb(j);
            j++;
            ps(press enter);
            ps();
            char c[10];
            gets(c);
            //cin>>c;
        }
        iter++;
        deb(iter);
        ps(completed);
        ps();
    }
}
/*
5
1 1
2 3
4 3
3 2
5 5
*/

int main() {
    solve();
}
