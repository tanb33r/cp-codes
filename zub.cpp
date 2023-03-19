#include <stdio.h>
    int sum = 0;

int fibo(int x)
{
int p=5;
    if(x==1)
        return 0;
    if(x==2)
        return 1;
    else
            sum+=(fibo(x-1));

}
//int main()
//{
//    int n=6,i,j,c=0;
//        printf("dsa ");
//
//    fibo(5);
//
//
//        printf("dsa %d",sum);
//}
