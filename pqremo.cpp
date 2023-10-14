#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    int priority;
    node *next;
};

class PQ {

  private:
    node *start;

  public:
    PQ() {
        start = NULL;
    }

    void Enqueue(int data1, int priority1) {
        node *NewNode = new node;
        NewNode->data = data1;
        NewNode->priority = priority1;
        NewNode->next = NULL;
        if(start == NULL)
            start = NewNode;
        else {
            node * temp = start;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = NewNode;
        }
    }

    void Dequeue() {
        node *test = start;
        int i = test->priority;
        while (test!=NULL) {
            if ( i > test->priority) i = test->priority;
            test=test->next;
        }

        if (i == start->priority) {
            node *temp = start;
            start=start->next;
            delete temp;
            return;
        }

        else {
            node *q=start;
            while(q->next != NULL) {
                if (i == q->next->priority ) {
                    node *temp = q->next;
                    q->next=temp->next;
                    delete temp;
                    break;
                }
                q=q->next;
            }
            return;
        }
    }


    void Display() {
        node *temp;
        if(start == NULL) {
            cout<<"\n\nList is empty";
        }
        int i = temp->priority;

        while (temp!=NULL) {
            if ( i > temp->priority) i = temp->priority;
            temp=temp->next;
        }

        node *q = start;
        while(q!=NULL) {
            if (i == q->priority) cout << q->data << " ";
            q = q->next;
        }

        cout<<"\n";
    }/*End of display() */
};
int main() {
    PQ queue_obj;
    queue_obj.Enqueue(3,0);
    queue_obj.Enqueue(8,4);
    queue_obj.Enqueue(5,1);
    queue_obj.Enqueue(5,1);
    queue_obj.Enqueue(50,1);
    queue_obj.Enqueue(40,1);
    queue_obj.Enqueue(7,1);
    queue_obj.Enqueue(6,8);
    queue_obj.Display();
    queue_obj.Dequeue();
    queue_obj.Display();
    return 0;
}
