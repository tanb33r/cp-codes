#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos,temp;
    for(i=0;i<(n-1);i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[pos]>a[j])
                pos=j;

        }
         if(pos!=i)
            {
                temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
            }
    }
    printf("\n after sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(i<n-1)
            printf(",");
    }

}
