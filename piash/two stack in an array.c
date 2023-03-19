#include<stdio.h>
#include<stdlib.h>
#define Max 3
int stack[Max];
int count=0,choice,top=-1,top1=Max,num,i;
void push()
{
    if(top>=Max-1)
    {
        printf("Stack 1 is overflow");
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
    if(top==-1)
    {
        printf("Stack 1 is underflow");
    }
    else
    {
        printf("Popped element : %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty");

    }
    else
    {
         printf("Element in stack:\n");
        for(i=0;i<top+1;i++)
        {
            printf("%d \n",stack[i]);
        }

    }
}
void push1()
{
    if(top1-1==-1)
    {
        printf("Stack 2 is overflow");
    }
    else
    {
        top1--;
        printf("The pushed element: ");
        scanf("%d",&num);
        stack[top1]=num;
    }
}
void pop1()
{
    if(top1==Max)
    {
        printf("Stack 2 is underflow");
    }
    else
    {
        printf("Popped element : %d\n",stack[top1]);
        top1++;
    }
}
void display1()
{
    if(top1==Max)
    {
         printf("Stack is empty");

    }
    else
    {
        printf("Element in stack:\n");
        for(i=Max-1;i>=top1;i--)
        {
            printf("%d \n",stack[i]);
        }
    }
}
int main()
{
    while(-1){
    int ch;
     printf("\n 1.push for 1st stack \n 2.pop for 1st stack \n 3.display for 1st stack\n \n 4.push for 2nd stack \n 5.pop for 2nd stack \n 6.display for 2nd stack\n");
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
    if(ch==4)
    {
       push1();
    }
    else if(ch==5)
    {
       pop1();
    }
    else if(ch==6)
    {
       display1();
    }


}
}



