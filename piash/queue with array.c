#include<stdio.h>
#include<stdlib.h>
#define Max 50
int head=0,tail=0;
void enqueue(int q[], int n,int c) {
    int i=0,l;

    if(c==Max)
        printf("queue overflow");
    else {
        l=i%Max;
        i++;
        q[tail]=n;
        tail++;
    }
}
int dequeue(int q[]) {
    if(c==-1)
        printf("queue underflow");
    else {
        c--;
    }
    return q[c+1];
}

int main() {
    int Q1[Max],Q2[Max];
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
    for(int i = 0 ; i<c1; i++)
        printf("%d \n",Q1[i]);

}

