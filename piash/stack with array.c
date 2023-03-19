#include<stdio.h>
#include<stdlib.h>
#define Max 6
int stack[Max];
int count=0,choice,top=-1,num,i;
void push()
{
    if(top>=Max-1)
    {
        printf("Stack is overflow");
    }
    else
    {
        top++;
        printf("The pushed element: ");
        scanf("%d",&num);
        stack[top]=num;
    }
}
void pop()
{
    if(top<=0)
    {
        printf("Stack is underflow");
    }
    else
    {
        printf("Popped element : %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("Element in stack:\n");
        for(i=0;i<top+1;i++)
        {
            printf("%d \n",stack[i]);
        }
    }
    else
    {
        printf("Stack is empty");
    }
}
int main()
{
    while(-1){
    int ch;
     printf("\n1.push \n2.pop \n3.dispay\n");
    printf("Enter a choice");
    scanf("%d",&ch);

    if(ch==1)
    {
       push();
    }
    else if(ch==2)
    {
       pop();
    }
    else if(ch==3)
    {
       display();
    }
    else
    {
       printf("wrong input");
    }

}
}

