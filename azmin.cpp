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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;

int main() {
    int m,n;
    cin>>m;
    for(int i=0; i<m; i++) {
        cin>>n;
        int arr[n],maxindex,minindex,a,b,moves=0;
        for(int j=0; j<n; j++) cin>>arr[j];
        maxindex = distance(arr,max_element(arr, arr + n));
        minindex = distance(arr,min_element(arr, arr + n));

        a = min(maxindex,minindex);
        b = max(maxindex,minindex);

//            moves = n-a;
        // 1 5     1 2   3 5 4
//        else {
//1 11       10 4 2 3 1 5 6   11 7 8 9
//                deb(a);
//                deb(b);
        if(a>=n/2 && b>n/2)
            moves = n-a;
        else
            moves =  min(a+1,n-a) + min(b-a,n-b);
        cout<<moves<<endl;
    }
}
