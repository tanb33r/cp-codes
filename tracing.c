#include<stdio.h>
int a, b;
int func1(float x);
void func2(int x, float y);
int main() {
    a=289%5;
    b=289/5;
    printf("1st main print   %d %d\n", b, a);
    a=func1(b+5.5);
    func2(12, 15.0);
    printf("2nd main print   %d %d\n", a, b);
    return 0;
}
int func1(float x) {
    b=b*a;
    printf("func1    %f\n", x);
    printf("b becomes %f\n", b);
    printf("a becomes %f\n", b-1);
    func2(5, 4.5);
    return b-1;
}
void func2(int x, float y) {
    printf("func2    %d   %f\n", x, y);
    return;
}

