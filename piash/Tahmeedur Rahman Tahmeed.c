#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*head;
void CreateList(int num) {
    struct Node *fn, *t;
    int   i;
    head =(struct Node*)malloc(sizeof(struct Node));

    head->data= num;
    head->next=NULL;
}
int size() {
    struct Node *t;
    int x=0;
    if(head==NULL) {
        x = -1;
    } else {
        t=head;
        while(t!=NULL) {
            x++;
            t=t->next;
        }
    }
    return x;
}

void Display() {
    struct Node *t;
    if(head==NULL) {
        printf("List is empty");

    } else {
        t=head;
        while(t!=NULL) {
            printf("%d ",t->data);
            t=t->next;
        }
    }
    puts("");
}
void AddInFirst(int num1) {
    struct Node *fn1;
    fn1=(struct Node*)malloc(sizeof(struct Node));

    if(fn1==NULL) {
        printf("Can't be allocated");

    } else {
        fn1->data=num1;
        fn1->next=head;
        head=fn1;

    }
}
void AddInLast(int num2) {
    struct Node *fn2,*t;
    fn2=(struct Node*)malloc(sizeof(struct Node));
    if(fn2==NULL) {
        printf("Can't allocated");

    } else {
        fn2->data=num2;
        fn2->next=NULL;
        t=head;
        while(t->next!=NULL)
            t=t->next;
        t->next=fn2;

    }
}
void AddInMiddle(int value) {
    struct Node *fn1,*t,*temp;
    int pos1 = size()/2;
    fn1=(struct Node*)malloc(sizeof(struct Node));
    int pos = size()/2;
    t=head;
    while(--pos) {
        t=t->next;
    }

    temp = t->next;
    t->next = fn1;
    fn1->data=value;
    fn1->next=temp;
}
void FindNum(int nc) {
    struct Node *fn;
    fn=head;
    int pos = 1;
    while(fn!=NULL) {
        if(fn->data==nc) {
            printf("found the value at %d th node",pos);
            break;
        }
        pos++;
        fn=fn->next;
    }
}
void DeleteFirst() {
    struct Node *fn4;
    if(head==NULL) {
        printf("There are no node in the list");
    } else {
        fn4 = head;
        head = head->next;
        printf("\n Deleted value is : %d\n", fn4->data);
        free(fn4);
    }
}
void DeleteLast() {
    struct Node *fn5, *pren;
    if(head==NULL) {
        printf("There is no element in the list");
    } else {
        fn5 = head;
        pren = head;
        while(fn5->next != NULL) {
            pren = fn5;
            fn5 = fn5->next;
        }
        if(fn5 = head) {
            head = NULL;
        } else {
            pren->next = NULL;
        }
        free(fn5);
    }
}

void DeleteMiddle() {
    int i;
    struct Node *fn6, *preNode;
    if(head == NULL) {
        printf("There are no nodes in the list");
    } else {
        struct Node *fn1,*t,*temp;
        fn1=(struct Node*)malloc(sizeof(struct Node));
        int pos = size()/2;
        if(size() == 1)pos = 1;
        t=head;
        while(--pos) {
            t=t->next;
        }
        temp = t->next;
        t->next = t->next->next;
        free(temp);
    }
}
int main() {
    while(1) {
        int choice;
        int n,num;
        printf("1.Insert Node at the beginning:\n");
        printf("2.Insert Node at the end:\n");
        printf("3.Insert Node at the middle:\n");
        printf("4.delete Node from the beginning:\n");
        printf("5.delete Node from the end:\n");
        printf("6.delete Node from the middle:\n");
        printf("7.Display list:\n");
        printf("8.Find a value in the list:\n");
        printf("9.Exit:\n");
        scanf("%d",&choice);

        if(choice==1) {
            printf("Input value: ");
            scanf("%d",&num);
            if(head==NULL) CreateList(num);
            else AddInFirst(num);
        } else if (choice==2) {
            printf("Input value: ");
            scanf("%d",&num);
            if(head==NULL) CreateList(num);
            else AddInLast(num);
        } else if (choice==3) {
            printf("Input value: ");
            scanf("%d",&num);
            if(head==NULL) CreateList(num);
            else AddInMiddle(num);
        } else if (choice==4) {
            DeleteFirst();
        } else if(choice==5) {
            DeleteLast();
        } else if(choice==6) {
            DeleteMiddle();
        } else if(choice==7) {
            printf("\n The list is: \n");
            Display();

        } else if(choice==8) {
            int nc;
            printf("Enter number for search:");
            scanf("%d",&nc);
            FindNum(nc);
        }

        else if(choice==9) {
            break;
        }else if(choice==9) {
              printf("Your Input is wrong, please choice between 1-9\n");
        }

//        printf("\n");
//        Display();
        printf("\n");


    }
}

