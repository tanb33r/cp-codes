#include <bits/stdc++.h>
using  namespace std;
#define ll      long long int
#define pai     pair<int,int>
#define vi      vector<long long int>
#define vb      vector<bool>
#define vm      vector<vector<int> >
#define vd      vector<double>
#define vs      vector<string>
#define vp      vector< pair <string,int> >
#define mpi     map<int,int>
#define mps     map<char,int>
#define sti     stack<int>
#define stc     stack<char>
#define sei     set<int>
#define ses     set<string>
#define multii  multiset<int>
#define forn(i,n)    for (int i = 0; i < n; i++)
#define fork(i,k,n)  for (int i = k; i <= n; i++)
#define forkr(i,k,n) for (int i = k; i >= n; i--)
const int MAX=1e5+1;
void result() {
    ll n,k;
    cin>>n>>k;
    vector<bool> visited(n+1,0);
    list <ll> l;

//    cout<<l.size()<<"     asdasdz\n";
    ll x;

    forn(i,n) {
        cin>>x;

        if(l.size()<k && visited[x]==0) {
            l.push_front(x);
            visited[x]=1;
        } else if(l.size()==k && visited[x]==0) {
            visited[l.back()]=0;
            l.pop_back();
            l.push_front(x);
            visited[x]=1;
        }

    }
    cout<<l.size()<<endl;
    for(auto it:l) {
        cout<<it<<" ";
    }
}


int main() {
//    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//#ifndef ONLINE_JUDGE
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
//#endif
    ll t=1;
    //cin>>t;
    while(t--) {
        result();
    }


}
