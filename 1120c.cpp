#include<iostream>
#include<algorithm>
#include<memory.h>
#define N 5010
int lcs[N][N];
int f[N];
using namespace std;
int main() {
    int n,a,b;
    int i,j;
    char s[N];
    cin>>n;
    cin>>a>>b;
    cin>>s+1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            lcs[i][j]=s[i]==s[j]?lcs[i-1][j-1]+1:0;
        }
    }
    memset(f,0x3f,sizeof(f));
    f[0]=0;
    for(i=1; i<=n; i++) {
        f[i]=f[i-1]+a;
        for(j=1; j<i; j++) {
            f[i]=min(f[i],f[max(i-lcs[i][j],j)]+b);
        }
    }
    cout<<f[n]<<endl;
}

