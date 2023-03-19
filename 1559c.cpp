#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);i++)
#define  INPUT              freopen("input.txt", "r", stdin)
#define  OUTPUT             freopen("output.txt", "w", stdout)
#define  umap               unordered_map
#define  yo(x)              cout<<(#x)<<" = "<<(x)<<endl;
#define  F                  first
#define  print(x)           cout<<x<<endl;
#define  mem(ar, val)       memset(ar, val, sizeof(ar))
#define  point(x)           fixed<<setprecision(x)
#define  printcase(n)       cout << "Case " << tc << ": " << n <<endl;
#define  aInput(ar, n)      for(int i=0; i<n; i++)cin>>ar[i];
using namespace std;
typedef pair<int,int> pii;
bool isPalindrome(string s) {
    for(int i=0, j=s.size()-1; i<s.size()/2; i++, j--) {
        if(s[i]!=s[j]) return 0;
    }
    return 1;
}
bool isPrime(int n) {
    if(n<2) return 0;
    if(n==2||n==3) {
        return 1;
    }
    if(n%2==0) return 0;
    for(int i=3; i*i<=n; i+=2) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
//bool cmp(pair<int, int> a, pair<int, int> b) {
//    return a.ff<b.ff;
//}

void lmao() {
    int x,y;
    x++,y++,x++,y++,x++,y++,x++,y++,x++,y++,x++,y++,x++,y++,x++,y++,x++,y++,x++,y++,x++,y++,x++,y++;
}


void korlam(int Test) {
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int Test=1;
//    cout<<fixed<<setprecision(9);
    cin>>Test;
    lmao();
    while(Test--)
        korlam(Test);
}
