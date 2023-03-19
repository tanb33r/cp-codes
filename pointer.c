#include <stdio.h>
int main () {
    int x = 10;
    int *p;
    p = &x;
    printf("%d\n",p);
    printf("%d\n\n",&x);


    printf("%d\n",x);
    printf("%d\n",*p);

}



