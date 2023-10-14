#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define ll long long
#define println(x) cout<<x<<endl
#define print(x) cout<<x
#define prints(x) cout<<x<<" "
#define printAr(x,n) for(int i=0;i<n;i++)cout<<x[i]<<" ";cout<<endl;
#define inAr(x,n) for(ll i=0;i<n;i++)cin>>x[i]
#define in(x) cin>>x
#define IN ({ ll TEMP; cin>>TEMP; TEMP;})
#define SN ({ string TEMP; cin>>TEMP; TEMP;})
#define CN ({ char TEMP; cin>>TEMP; TEMP;})

const ll INF = 9e18;
const int mod = 1e9+7;
const ll N = 1e4+10;

/**********************************************************************************************
Ceil = (n+(k-1)/k);
Previous-Present number divisible by k = n/k*k, 9/4*4 = 8, 12/4*4=12;
v/k+v/k^2+v/k^3+v/k^k = while(v>0)sum+=v,v/=k;
***********************************************************************************************/


void solve(){
    int n = IN;
    string s = SN;
    vector<int> a(n);
    inAr(a, n);
    int ans = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            int j = i+1;
            while(s[j]=='1' && a[j]>=a[i] && j<n){
                j++;
            }
            if(a[j]<a[i] and s[i]=='1'){
                s[i] = '1';
                s[j] = '0';
            }
            i = j-1;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i]=='1')ans+=a[i];
    }
    println(ans);
}

int main(){
	fast;
    int testCase = 1;
    testCase = IN;
    while(testCase--){
        solve();
    }
    return 0;
}
