#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("Enter total number of input :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos,temp;
    for(i=1;i<=n-1;i++)
    {
       j=i;
            while(j>0 && a[j-1]<a[j])
            {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
                j--;
            }



    }
    printf("\n descending orders are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }


}


