#include <stdio.h>
#include <math.h>
#define SIZE_N 100000
bool flag[SIZE_N+5];
long long  primes[SIZE_N+5];

long long  D[1000010];
void DivMulti() {
    long long  i,j,val,N,M,count;
    D[1]=1;
    for(i=2; i<=SIZE_N; i++) {
        N=M=i;
        val=sqrt(N)+1;
        for(j=0; primes[j]<val; j++) {
            if(M%primes[j]==0) {
                D[N]=N*D[M/primes[j]];
                if((M/primes[j])%primes[j]!=0)
                    D[N]*=D[primes[j]];
                M=0;
                break;
            }
        }
        if(M==N)
            D[N]=N;

    }
}

long long  seive() {
    long long  i,j,total=0,val;
    for(i=2; i<=SIZE_N; i++) flag[i]=1;
    val=sqrt(SIZE_N)+1;
    for(i=2; i<val; i++)
        if(flag[i])
            for(j=i; j*i<=SIZE_N; j++)
                flag[i*j]=0;
    for(i=2; i<=SIZE_N; i++)
        if(flag[i])
            primes[total++]=i;
    return total;
}

int main() {
    long long  total=seive();
    long long  n;
    DivMulti();
    scanf("%d",&n);
    long long ans=1ll;
    for(long long  i =1; i<=n; i++) {
        ans*=D[i];
    }
    ans*=ans;
    printf("Multiple of squares of divisors of numbers from 1 to %lld is %lld\n",n,ans);
    return 0;
}
