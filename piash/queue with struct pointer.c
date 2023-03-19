#include<stdio.h>
#include<stdlib.h>
struct queue {
    int data;
    struct queue *next,*head,*tail;
};
void enqueue(struct queue,int n) {

    queue->data=n;
    queue->next=NULL;
    if(head == NULL)
        head = tail = queue;
    else {
        tail-> next = head;
        tail= head;
    }
}
int dequeue(struct queue) {
    int x;
    struct queue *head=queue->head;
    if(head==NULL)
        printf("Queue underflow");
    else {
        temp=head;
        x = temp->data;
        head=head->next;
        free(temp);
    }
    return x;

}
void display(struct queue) {
    struct queue *head=queue->head;
    if(head == NULL)
        printf("\nQueue is Empty!!!\n");
    else {
        struct queue *temp = head;
        while(temp->next != NULL) {
            printf("%d--->",temp->data);
            temp = temp -> next;
        }
        printf("%d--->NULL\n",temp->data);
    }
}

int main() {
    struct queue *Q1=(struct queue*)malloc(sizeof(struct queue));
    struct queue *Q2=(struct queue*)malloc(sizeof(struct queue));
    int c1=0,c2=0;
    int n,x;
    printf("Total number of values\n");
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&x);
        if(x%2==1)
            enqueue(Q1,x),c1++;
        else
            enqueue(Q2,x),c2++;
    }
    while(c2!=-0) {
        enqueue(Q1,dequeue(Q2));
        c1++,c2--;
    }
    display(Q2);
}

