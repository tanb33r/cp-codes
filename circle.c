#include <stdio.h>
#include <math.h>


typedef struct circle {
    double x,y,r;
}circle;
int main() {
    circle c1,c2;
    scanf("%lf%lf%lf",&c1.x,&c1.y,&c1.r);
    scanf("%lf%lf%lf",&c2.x,&c2.y,&c2.r);
    double distance = sqrt( (c2.x - c1.x)*(c2.x - c1.x) + (c2.y - c1.y)*(c2.y - c1.y) );
    if(distance > c1.r+c2.r) {
        printf("Do not Intersect");
    }
    else {
        printf("Intersect");
    }
}
