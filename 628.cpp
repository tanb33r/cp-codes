#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define wf(t)  int t;   while(sf(t)!= EOF)
#define d(x)  cout<<x<<"\n"
#define vi vector<int>
typedef long long ll;
using namespace std;

void mama(string d[],int ds,string r,string x) {
    if(r.size() == 0) {
        d(x);
        return ;
    }

    if(r[0] == '0') {
        r.erase(0,1);
        f(i,10) {
            char c = i+'0';
            string x2 = x + c;
            mama(d,ds,r,x2);
        }
    } else {
        r.erase(0,1);
        f(i,ds) {
            string x2 = x +d[i];
            mama(d,ds,r,x2);
        }
    }
}


int main() {

    int ds;
    while( sf(ds)!= EOF) {
        string d[ds];
        f(i,ds)
        cin>>d[i];

        in(rs);

        f(i,rs) {
            string v;
            cin>>v;
            cout<<"--\n";
            string x="";
            mama(d,ds,v,x);
        }
    }
}


/*
2
root
2super
1
#0
1
admin
1
#0#

*/

