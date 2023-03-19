#include<stdio.h>
int main()
{
    //Answer to the question no. (a)//
    int n;
    scanf("%d",&n);
    for (int i=1; i*i<=n; i++ )
    {
        if(i*i==n)
        {
            printf("Perfect.");
            return 0;
        }
    }
    printf("Not perfect.");
    //Answer to the question no. (b)//
    int i=1;
    while (i*i<=n)
    {
        if(i*i==n)
        {
            printf("Perfect.");
            i++;
            return 0;
        }
    }
    printf("Not perfect.");
    return 0;
}
