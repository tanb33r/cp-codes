#include<stdio.h>
#include<math.h>

double sine(double x) {
    double a=x,ans = 0,o = -1,k=0;
    int n=1,i;
    for(i = 1; i<=100; i++) {
        ans += a;
        a *= -( (x/(n+1)) * (x/(n+2)) );
        n+=2;
    }
    return ans;
}
double cosine(double x) {
    double a=1,ans = 0,o = -1,k=0;
    int n=0,i;
    for(i = 1; i<=100; i++;) {
        ans += a;
        a *= -( (x/(n+1)) * (x/(n+2)) );
        n+=2;
    }
    return ans;
}
double tangent(double x) {
    double ans = sine(x)/cosine(x);
    return ans;
}

int main () {
    while(1) {
        double x,ans ;
        int n ;
        printf("Choose function :\n\t\t [1] sine(x)\n\t\t [2] cosine(x)\n\t\t [3] tangent(x)\n");
        scanf("%d",&n);
        printf("Enter angle x in radians : \n");
        scanf("%lf",&x);
        if(n == 1) {
            ans = sine(x);
        } else if(n == 2) {
            ans = cosine(x);
        } else if(n == 3) {
            ans = (tangent(x));
        }
        printf("%lf\n",ans);
    }
}
