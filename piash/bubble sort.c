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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }

    }
    printf("\n after sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}

