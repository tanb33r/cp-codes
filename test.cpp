#include<cstdio>
int M(int a,int b) {
    return a<b?a:b;
}
int main() {
    int n,m,i,j,l,r,L,R,l2,b=0;
    scanf("%d%d",&n,&m);
    for(i=0; i<n; i++) {
        l=m+1;
        r=0;
        for(j=-1; j<m+2; j++)
            if(getchar()=='1') {
                r=j;
                if(l==m+1)l=j;
            }
        l2=M(L+2*r+1,R+m+2);
        R=M(L+m+2,R+2*(m-l)+3);
        L=l2;
        if(r&&!b) {
            L=r;
            R=m-l+1;
            b=1;
        }
    }
    printf("%d\n",b?L:0);
    return 0;
}
