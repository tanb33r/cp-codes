#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  pb(x)              push_back(x)
#define  endl               "\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
#define  fast    ios::sync_with_stdio(0),cin.tie(0);
#define printcaseii(n, m) cout << "Case " << tc << ": " << n << " " << m <<endl;
#define aInput(ar, n) for(int i=0; i<n; i++)cin>>ar[i];
#define vInput(v, n) for(int i=0; i<n; i++){lli xwq;cin>>xwq;v.push_back(xwq);}
#define input2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cin >> ar[i][j];}}
#define print2D(ar, row, col) for(int i=0; i<row; i++){for(int j=0; j<col; j++){cout << ar[i][j] << "";}cout<<endl;}
#define vprint(vec) for(int i=0; i<vec.size(); i++){cout << vec[i]; (i==vec.size()-1? cout<<endl : cout<<" ");}
#define aprint(ar, n) for(int i=0; i<n; i++){cout << ar[i] << " ";}cout<<endl
using namespace std;

void Solution() {
    ll n,x,k;
    cin>>n>>k>>x;
    vector<ll> A;
    ll d[n] {0};
    f(i,n) {
        ll w;
        cin>>w;
        A.pb(w);
    }

    sort(all(A));

    f(i,n) {
        if(!i)continue;
        if(A[i] - A[i-1] > x) {
            ll dif = A[i] - A[i-1] +x -1;
            ll val = dif/x -1;
            d[i] = val;
        }
    }

    sort(d,d+n);
    f(i,n) {
        if(d[i])
            if(d[i]<=k) {
                k-=d[i];
                d[i]=0;
            } else {
                break;
            }
    }
    ll cnt = 1;
    f(i,n)  cnt+= d[i]!=0;
    cout<<cnt<<"\n";
}
int main() {
    int TEST=1;
//    cin>>TEST;
    while(TEST--)
        Solution();
}
