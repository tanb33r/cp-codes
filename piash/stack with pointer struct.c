#include<stdio.h>
#include<stdlib.h>
#define Max 10
int count=0;
struct stack {
    int data[Max];
    int top;
};
bool pop(struct stack*s) {
    if(s->top==-1)
        return 0;
    else {
        s->top--;
        return 1;
    }
    count--;
}
void push(struct stack *s) {
    int n;
    printf("Enter a number for pushed: \n");
    scanf("%d",&n);
    if(s->top==Max-1)
        printf("overflow");
    else {
        s->top++;
        s->data[s->top]=n;
    }
}
void print(struct stack *s) {
    int i;
    for(i=0; i<s->top+1; i++) {
        printf("the elements are: %d \n",s->data[i]);
    }
}
void createstack(struct stack*s) {
    s->top=-1;
}

int main() {
    struct stack *s= (struct stack*)malloc(sizeof(struct stack));
    createstack(s);
    string s = "[ABC[23]][89]";
    int i=0,count = 0;
    bool c=1;
    while(c==1) {
        if(s[i]=='[') {
            c=1;
            push(s[i]);
        }
        if(s[i]==']')
            c = pop(s[i]);
        }
    }
        printf("the index is: %d \n",i);
}
