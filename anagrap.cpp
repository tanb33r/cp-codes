#include <stdio.h>
#include <math.h>
#define SIZE_N 1000
#define SIZE_P 1000
bool flag[SIZE_N+5];
int primes[SIZE_P+5];

int D[1000010];
void DivisorGenerate() {
    int i,j,val,N,M,count;
    D[1]=1;
    for(i=2; i<=SIZE_P; i++) {
        N=M=i;
        val=sqrt(N)+1;
        for(j=0; primes[j]<val; j++) {
            if(M%primes[j]==0) {
                count=0;
                while(M%primes[j]==0) {
                    M/=primes[j];
                    count++;
                }
                D[N]=(count+1)*D[M];
                break;
            }
        }
        if(M==N) { //Special Case if N equal prime
            D[N]=2;
        }
    }
}

int seive() {
    int i,j,total=0,val;
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
int Sum_Of_Divisor(int N) {
    int i,val,count,sum,p,s;
    val=sqrt(N)+1;
    sum=1;
    for(i=0; primes[i]<val; i++) {
        if(N%primes[i]==0) {
            p=1;
            while(N%primes[i]==0) {
                N/=primes[i];
                p=p*primes[i];
            }
            p=p*primes[i];
            s=(p-1)/(primes[i]-1);
            sum=sum*s;
        }
    }
    if(N>1) {
        p=N*N;
        s=(p-1)/(N-1);
        sum=sum*s;
    }
    return sum;
}
int main() {
    int total=seive();
    int n;
    DivisorGenerate();
    scanf("%d",&n);
    int ans=1;
    for(int i =0;i<n;i++)
         printf("%d nmbr of Of divisor:  %d\n",i,D[i]);
    return 0;
}
