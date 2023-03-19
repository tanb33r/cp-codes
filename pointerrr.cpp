#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node {

    int value;
    struct node *p;
};
struct node *head=NULL,*tail= NULL;

void createlist() {

    struct node *nextnode,*temp;
    //head =NULL;
    //tail=NULL;
    int i,n;
    printf("Please Enter the Size: \n");
    scanf("%d",&n);
    printf("Please enter the values: \n");

    for(i=0; i<n; i++) {
        nextnode= (struct node*) malloc(sizeof(struct node));
        scanf("%d",&nextnode->value);
        nextnode->p= NULL;

        if(head==NULL) {
            head = nextnode;
            tail = nextnode;
        } else {

            tail->p= nextnode;
            tail= nextnode;
        }
    }
    printf("Linked List created successfully\n");
    printf("\n");

}
void Display() {

    struct node *temp1;
    temp1=head;

    while(temp1!=NULL) {
        printf("%d ",temp1->value);
        temp1=temp1->p;
    }
    printf("\n");
    printf("\n");
}

void insertbegin() {

    struct node *addnew, *temp2;
    addnew= (struct node*)malloc (sizeof(struct node));
    printf("Please enter the value for new node:\n");
    scanf("%d",&addnew->value);
    temp2=head;
    addnew->p= NULL;


    if(head==NULL) {

        head = addnew;
        tail = addnew;
    } else {

        addnew->p=temp2;
        head=addnew;
    }
    printf("Element added successfully\n");
    printf("\n");
}
void insertanypos() {

    struct node *t,*t1, *newnode;
    int pos;

    newnode= (struct node*)malloc (sizeof(struct node));

    printf("Enter the Position:\n");
    scanf("%d",&pos);

    if(pos ==1) {
        insertbegin();
        return;
    }

    printf("Please enter the value:\n");
    scanf("%d",&newnode->value);
    newnode->p=NULL;
    if(head==NULL) {
        head=newnode;
        tail= newnode;
    }
    else {
        t=head;
        for(int i=1; i<pos; i++) {
            t1=t;
            t=t->p;
        }
        t1=t;
        t=t->p;
        t1->p= newnode;
        newnode->p=t;

    }

    printf("Element added\n");
    printf("\n");
}




int main() {


    bool f= false;
    char r;
    while(true) {
        printf("A Create a Linked List\n");
        printf("B Display\n");
        printf("C Insert at the Beginning\n");
        printf("D Insert at any position:\n");
        printf("E Exit\n");
        scanf("%s",&r);
        if(r=='A') {
            createlist();

        } else if(r=='B') {
            Display();

        } else if(r=='C') {
            insertbegin();
        } else if(r=='D') {
            insertanypos();
        }
        if(r=='E') {
            f=false;
            break;
        }

    }


}

