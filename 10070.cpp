#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long flag, Mod4, Mod100, Mod400, Mod15, Mod55, i, len, leap;
    int x=0;
    char A[1000000];
    while (cin >> A)
    {
        if(x++)
        printf("\n");
        leap = flag = Mod4 = Mod100 = Mod400 = Mod15 = Mod55 = 0;
        len = strlen(A);

        for (i=0; i< len; i++)
        {

            Mod4 = ((Mod4 * 10) + (A[i]-'0')) % 4;
            Mod100 = ((Mod100 * 10) + (A[i]-'0')) % 100;
            Mod400 = ((Mod400 * 10) + (A[i]-'0')) % 400;
            Mod15 = ((Mod15 * 10) + (A[i]-'0')) % 15;
            Mod55 = ((Mod55 * 10) + (A[i]-'0')) % 55;
        }

        if ((Mod4==0 && Mod100!=0) || Mod400==0)
        {
            printf("This is leap year.\n");
            leap = 1;
            flag = 1;
        }

        if (Mod15==0)
        {
            printf("This is huluculu festival year.\n");
            flag = 1;
        }

        if (leap==1 && Mod55==0)
            printf("This is bulukulu festival year.\n");

        if (flag==0)
            printf("This is an ordinary year.\n");

    }
}
