#include <bits/stdc++.h>
using namespace std;
#define EPS 1e-7
double a,b,h,w;

void binarySearch(){
    double lo,hi,assumed_h;
    lo = 0;
    hi =  min(a,b);
    while(1){
        w = (hi-lo)/2+lo;
        assumed_h = sqrt(a*a-w*w)*sqrt(b*b-w*w)/(sqrt(a*a-w*w)+sqrt(b*b-w*w));
        if(fabs(assumed_h-h)<=EPS)
            return;
        if(assumed_h>h)lo=w;
        else hi=w;
    }
}
int main()
{

    int test,cs=1;
    scanf("%d",&test);
    while(test--){
    scanf("%lf%lf %lf",&a,&b,&h);

    binarySearch();
    printf("Case %d: %.10lf\n",cs++,w);
    }

    return 0;
}
