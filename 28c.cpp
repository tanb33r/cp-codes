#include <bits/stdc++.h>
using namespace std;
#define  ff(i,j,n)          for(int i=int(j);i<=n;++i)
const int N=60;
int n,m,a[N];
double f[N][N][N],c[N][N];
int main() {
    scanf("%d%d",&n,&m);
    c[0][0]=1;
    ff(i,1,n) {
        c[i][0]=1;
        ff(j,1,i)c[i][j]=c[i-1][j-1]+c[i-1][j];
    }
    ff(i,1,m)scanf("%d",&a[i]);
    ff(i,0,n)f[0][0][i]=i;
    ff(i,1,m)ff(j,0,n)ff(k,0,n)ff(l,0,j)
    f[i][j][k]+=f[i-1][j-l][max(k,(l+a[i]-1)/a[i])]*pow(i-1,j-l)/pow(i,j)*c[j][l];
    printf("%.12f\n",f[m][n][0]);
}
