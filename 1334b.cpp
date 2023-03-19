#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x;
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;
using namespace std;
void display(int ar[], int first, int last) {
    for(int i=first; i<last; i++) {
        cout << ar[i] << " ";
    }
    cout<<endl;
}

int main() {
//    fastio;
    w(t) {

        in(n);
        int a[n];
        double m ;
        cin>>m;


        double sum = 0 ;
        f(i,n) {
            sf(a[i]);
            sum+=a[i];
        }
        sort(a,a+n);
//        display(a,0,n);


        int j  = 0;
        while(j<n) {

//            d(sum/(n-j));

            if(sum/(n-j) >= m) {
                d(n-j);
                break;
            } else {
                sum -= a[j++];

            }
        }
        if(j==n)
            d(0);
    }

}

