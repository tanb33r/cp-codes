#include <stdio.h>
int digitMult(int id) {
    int i,ans;
    ans = 1;
    while(id>0) {
        y = id%10;
        id = id/10;
        ans = ans*y;
    }
    return ans;
}

int main() {
    int id = 265;
    int x ;
    x = digitMult(id);
    printf("%d",x);
}
