#include<stdio.h>
int a[1000005]= {0};
int main()
{
    int p,x;
    while(scanf("%d%d",&p,&x)!=EOF)
    {
        int flag=0;
        for(int last=1; last<=9; ++last)
        {
            int temp=0;
            a[p]=last;
            for(int i=p-1; i>=0; --i)
            {
                a[i]=(a[i+1]*x+temp)%10;
                temp=(a[i+1]*x+temp)/10;
            }
            if(a[0]==last && a[1]==1)
            {
                flag=1;
                for(int i=1; i<=p; ++i)
                    printf("%d",a[i]);
                printf("\n");
                break;
            }
        }
        if(!flag) printf("Impossible\n");
    }
}



