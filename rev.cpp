
#include<bits/stdc++.h>

using namespace std;



class Node
{
public:
    Node *next;
    Node *prev;
    Node()
    {
        next= NULL;
    }
    int data;
    Node(int d)
    {
        data = d;
    }
};

class SLL
{
public:
    Node *head, *tail;

    SLL()
    {
        head= NULL;
        tail= NULL;
    }

    void add(int d)
    {
        Node *n = new Node(d);
        if(head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }

    srch(int d)
    {
        Node *temp;
        temp = head;
        int c=1;
        while(temp!=NULL)
        {
            if(temp->data = d)
            {
                puts("Yes\n");
                break;
            }
            temp = temp->next;
        }
    }

    del(int d)
    {
        Node *temp;
        Node *temp2;
        temp = head;
        if(d==1)
        {
            head = head->next;
        }
        else
        {
            int c=1;
            while(c!=d)
            {
                temp2=temp;
                temp=temp->next;
                c++;
            }
            temp2->next = temp ->next;
        }

        delete(temp);

    }

    void print()
    {
        Node* p = head;
        if(head==NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        while(p!= NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }


    void neg(SLL *s)
    {
        Node *temp;
        temp = head;
        int c=1;
        int k=0;
        while(temp!=NULL)
        {

            if(temp->data < 0)
            {
                s->add(temp->data);
                del(c-k);
                k++;

            }
            c++;
            temp = temp->next;
        }
    }
    void rd()
    {
        int x=0;
        Node *temp;
        temp = head;
        int c=1;
        int k=1;
        while(temp!=NULL)
        {
            Node *temp2;
            temp2=temp->next;

            k=c+1;
            while(temp2!=NULL)
            {

                if(temp->data == temp2->data)
//                    cout<<temp->data<<"\t"<<temp2->data<<"\n";
                {
                    temp2 = temp2->next;
                    del(k);
                }
                else
                {
                    temp2 = temp2->next;
                    k++;
                }

            }
            c++;
            temp = temp->next;

        }
    }
};


int main ()
{


    SLL *sll = new SLL();
    SLL *sll2 = new SLL();
    sll->add(4);
    sll->add(4);
    sll->add(4);
    sll->add(4);
    sll->add(5);
    sll->add(5);
    sll->add(5);
    sll->add(5);
    sll->add(5);
    sll->add(5);
    sll->del(1);
    sll->del(1);

    sll->add(6);
    sll->add(6);
    sll->add(6);


    sll->print();
    sll->rd();
    sll->print();



}
