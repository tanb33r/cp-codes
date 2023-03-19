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

using namespace std;
typedef pair<int,int> pii;
typedef  long long          ll;
int N=1;
void solve() {
    string s;
    cin>>s;
    vector <int> v;
    char c;
    for(int i = 0; i<s.size();) {
        c = s[i];
        int k = 0;
        while(c == s[i] and i<s.size()) {
            k++;
            i++;
        }
        v.pb(k);
    }
//A

    cout<<"Case "<<N++<<": ";

    if(v.size() == 1) {
        int x = s.size();
        cout<<max(x-1,1)<<"\n";
        return;
    }

    if(v.size()&1) {
        v[0] += v[v.size()-1];
        v.pop_back();
    }
    sort(all(v));
    reverse(all(v));

    if(v[0] == 1) {
        if(v.size()==2) cout<<2<<'\n';
        else cout<<3<<'\n';
        return;
    }
    if(v[v.size()-1]==v[0]) {
        if(v[0]==2) cout<<3<<'\n';
        else cout<<v[0]<<'\n';
        return;
    }
    if(v[0] == v[1]) {
        cout<<v[0]<<'\n';
        return;
    }
    if(v[0]==2) {
        if(v[v.size()-1]==2) cout<<3<<'\n';
        else cout<<2<<'\n';
        return;
    }
    int ans=v[0]/2;
    if(v.size()>1)
        ans=max(ans,v[1]);
    cout<<ans<<endl;
}


int main() {

    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
