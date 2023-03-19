#include<stdio.h>

//calculates value of sine(x)
double sine(double x)
{
    double a=x,ans = 0,o = -1,k=0;
    int n=1;
    for(int i = 0; i<100; i++)
    {
        ans += a;
        a *= -( (x/(n+1)) * (x/(n+2)) );
        n+=2;
    }
    return ans;
}

//calculates value of cosine(x)
double cosine(double x)
{
    double a=1,ans = 0,o = -1,k=0;
    int n=2;
    for(int i = 0; i<100; i++)
    {
        ans += a;
        a = a * ( -((x/(n-1))*(x/n)) );
        n+=2;
    }
    return ans;
}

//calculates value of tangent(x)
double tangent(double x)
{
    double ans = sine(x)/cosine(x);
    return ans;
}

int main ()
{
    while(1)
    {
        int n;
        double x,ans;
        printf("Choose function :\n\t\t [1] sine(x)\n\t\t [2] cosine(x)\n\t\t [3] tangent(x)\n");
        printf(" \t\t [-1] Exit\n");
        scanf("%d",&n);

        if(n==-1)
            break;
        printf("Enter angle x in radians : \n");
        scanf("%lf",&x);

        //evaluates value of expected function and gives output accordingly.
        if(n == 1)
        {
            ans = sine(x);
            printf("sine(%lf) = %.7lf\n",x,ans);
        }
        else if(n == 2)
        {
            ans = cosine(x);
            printf("cosine(%lf) = %.7lf\n",x,ans);
        }
        else if(n == 3)
        {
            ans = (tangent(x));
            printf("tangent(%lf) = %.7lf\n",x,ans);
        }
    }
    return 0;
}
