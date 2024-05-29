#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
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
const int mod = 1e9+7;
const int N = 1e5+7;
vector<string> binary_decimals;

bool is_binary_decimal(const string& binary) {
    // Check if a string represents a binary decimal
    for (char c : binary) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}
vector<string> generate_binary_decimals(int n) {
    // Generate binary decimals up to n
    vector<string> binary_decimals;
    binary_decimals.pb("1");


    int j = 0;
    for (int i = 2; i <= 5; ++i) {
        int sz = binary_decimals.size();
        for(; j<sz; j++) {
            binary_decimals.pb(binary_decimals[j]+'0');
            binary_decimals.pb(binary_decimals[j]+'1');
        }

//        debb(binary);
    }
//    sort(all(binary_decimals));
//    for(auto x:binary_decimals) {
//        int y =stoi(x);
//
//        debb(y,x);
//    }
    return binary_decimals;
}

int can_be_product_of_binary_decimals(int n) {
    // Check if n can be represented as a product of binary decimals
    if(!is_binary_decimal(to_string(n)) and n<10) return 0;
    for (const string& binary : binary_decimals) {
        if(binary =="1") continue;
        int num = stoi(binary);
        if (n % num == 0 && is_binary_decimal(to_string(n / num))) {
            return 1;
        } else if(n % num == 0 && can_be_product_of_binary_decimals((n / num))) {
            return 1;
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >> t;

    // Generate binary decimals up to 10^5
    binary_decimals = generate_binary_decimals(100000);

    while (t--) {
        int n;
        cin >> n;
        if(is_binary_decimal(to_string(n)))
            cout<<"YES\n";
        else
            hmm(can_be_product_of_binary_decimals(n));
    }
    return 0;
}
