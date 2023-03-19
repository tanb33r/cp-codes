#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;
bool cmp(pair<int,pair<int,int> >a,pair<int,pair<int,int> >b ) {
    if( a.second.second==b.second.second)
        return a.first>b.first;
    return a.second.second>b.second.second;
}
void solve() {

    pair<int,int> p;
    vector<pair<int,pair<int,int> > >v,v2;
    map<int,int> m;
    in(n);
    int a[n];
    f(i,n) {
        int x;
        cin>>x;
        m[x]++;
        v.push_back(make_pair(x,make_pair(i,0)));
    }


    int ma = 0;
    for(auto i:m)
        ma = max(ma,i.second);


    if(ma>(n+1)/2) {
        ps(NO);
        return;
    }
    ps(YES);
    f(i,n) {
        v[i].second.second = m[v[i].first];
//        deb(v[i].second.second);
    }
    sort(all(v),cmp);
//    f(i,n) {
//        deb(v[i].first);
//    }
    int ans[n] = {0};
    int i = 0,j=0;
    int k =0;
    vector<int> br;
    br.push_back(1);
    int b = 0 ;
    while(k!=n) {
        if(b<br.size() and j>br[b] ) {
            if(j<n)
                br.push_back(j);
            j=br[b++];
        }
        int s = v[i].second.second;
        i+=s;
        while(s--) {
            if(ans[j] == 0) {
                ans[j] = v[k++].second.first+1,j+=2;
            }
        }
    }
    f(i,n-1) {
        cout<<ans[i]<<" "<<ans[i+1]<<endl;
    }
}


int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
