#include <stdio.h>
#include <stdlib.h>

struct Node
{
	char data;
	struct Node* link;
}*top;

void push(char data)
{
	struct Node* temp= (struct Node*)malloc(sizeof(struct Node));


	temp->data = data;
	temp->link = top;

	top = temp;
}

void pop()
{
    if(top == NULL)
    {
        printf("\nYour stack is empty. Can't delete...\n");
    }
    else
    {
        struct Node* temp;

        temp = top;

        top = top->link;

        temp->link = NULL;

        free(temp);
    }
}

void display()
{
	struct Node* temp;

    temp = top;

    if(top == NULL)
    {
        printf("\nYour stack is empty.\n");
    }
    else
    {
        printf("\nYour stack is: " );

        while (temp != NULL) {

            printf("%s\n",temp->data);
            temp = temp->link;
        }
    }
}

void parenthesis(char str[])
{
    int i;
    for(i=0; i<sizeof(str); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(str[i]);
        }

        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(top != NULL)
            {
                char temp = top->data;

                if((str[i] == ')' && temp == '(') || (str[i] == '}' && temp == '{') || (str[i] == ']' && temp == '['))
                {
                    pop();
                }
            }
            else
            {
                printf("\nParenthesis Unmatched...\n") ;
                return;
            }
        }

    }
    if (top == NULL)
    {
        printf("\nParenthesis Matched...\n");
    }
    else
    {
        printf("\nParenthesis Unmatched...\n" );
    }
}

int main()
{
    char str[100];

    printf("Please enter your expression: ");
    scanf("%s",&str);


    parenthesis(str);
}
