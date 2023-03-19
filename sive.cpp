#include <stdio.h>
#include <math.h>

#define N 1000
#define P 1000
bool flag[N+5];
int primes[N+5];

int sieve()
{
    int i,j,total=0,val;


    val=sqrt(N)+1;
    for(i=2; i<val; i++)
        if(flag[i]==0)
            for(j=i; i*j<=N; j++)
                flag[i*j]=1;

    for(i=2; i<N; i++)
        if(flag[i]==0)
            primes[total++]=i;
    return total;

}

int main()
{
    int t=sieve();

    int n,m=1000;

    for(int i = 2 ; i<m ; i++)
        if(flag[i]==0)
            printf("%d\n",i);

//
//    printf("Total Primes: %d\n",t);
//    for(int i=0; i<t; i++)
//        printf("%d\n",primes[i]);
    return 0;
}

