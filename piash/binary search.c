
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,mid,num;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("\nThe numbers of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter a number for search ");
    scanf("%d",&num);
    int left=0,right=n;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==num)
            printf("%d found in position %d",a[mid],mid+1);
        if(a[mid]<num)
            left=mid+1;
        else
            right=mid-1;
    }
}
