#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number,i;
    printf("Enter the number of array:");
    scanf("%d",&number);
    int a[number];
    printf("\nEnter the elements of array:\n");
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    int n,count=0;
    printf("Enter a number for search:");
    scanf("%d",&n);
    for(i=0;i<number;i++)
    {
        if(a[i]==n)
        {
            count++;
            printf("%d found in position %d\n",a[i],i+1);
        }

    }
     printf("\nNumber repeat %d times",count);
}
