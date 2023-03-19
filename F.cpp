#include <bits/stdc++.h>
#define SIZE 100105
#define MOD 1000000007LL
using namespace std;
long long int pow2[SIZE];
int csum[4][SIZE];
char str[SIZE];
int l, r;
int n, q;
inline int getValue(char ch){
    if(ch=='A') return 0;
    if(ch=='C') return 1;
    if(ch=='T') return 2;
    if(ch=='G') return 3;
}

inline void generateCSum(){
    for(int i=0; i<4; i++) csum[i][0]=0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<4; j++) csum[j][i]=csum[j][i-1];
        csum[getValue(str[i-1])][i]++;
    }
}

inline void init(){
    generateCSum();
    pow2[0]=1;
    for(int i=1; i<=n; i++){
        pow2[i]=2*pow2[i-1];
        pow2[i]%=MOD;
    }
}



inline void solve(){
    scanf("%d %d", &n, &q);
    assert(1<=n && n<=100000);
    assert(1<=q && q<=100000);
    scanf("%s", str);
    for(int i=0; i<n; i++) assert(str[i]=='A' || str[i]=='C' || str[i]=='G' || str[i]=='T');
    init();
    for(int i=0; i<q; i++){
        scanf("%d %d", &l, &r);
        assert(l>=1 && l<=n);
        assert(r>=1 && r<=n);
        assert(l<=r);
        long long int sum=1;
        for(int j=0; j<4; j++){
            sum*=(pow2[csum[j][r]-csum[j][l-1]]-1+MOD)%MOD;
            sum%=MOD;
        }
        printf("%lld\n", sum);
    }
}

int main(){
    solve();
    return 0;
}
