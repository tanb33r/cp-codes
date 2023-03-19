#include<stdio.h>

int main() {
//4a
    int i=0,n,p,x=1;
    scanf("%d%d",&n,&p);

    int j=0;
    for (i=0; i<=n; i++ ) {
        x = 1;
        for (j=1; j<=p; j++ ) {
            x *= i;
        }
        if(x==n) {
            printf("%d\n",i);
            return 0;
        } else if(x>n) {
            break;
        }
    }
    printf("integer p root doesn't exist\n");
    return 0;
    //
}

// onno ta
#include<stdio.h>
int factorial(int x) {
    int fact=1, i;
    for(i=1; i<=x; i++)
        fact*=i;
    return fact;
}
int power(int a, int b) {
    int i,result =1;
    for(i=1; i<=b; i++)
        result *= a;
    return result;
}

int series(int n) {

    int i,j=1,ans=0;
    int fibo1=0,fibo2=1;
    // fibonacci number ber kore store kore rakhbo
    for (i=0; i<n; i++ ) {
        if(i%2==0) {
                // even hoile power kore else factorial
            ans += power(fibo1,j);
            j++;
        // j er value 1 kore bare
        } else {
            ans+= factorial(fibo1);
        }

        printf("%d  %d\n",fibo1,ans);

        //emne next fibonacci number ber korsi

        int temp = fibo1;
        fibo1 = fibo2;
        fibo2 +=temp;
    }
    return ans;
}

int main() {

    int x,n=7;
//    scanf("%d",&n);
    x = series(n);
    printf("%d",x);

}

