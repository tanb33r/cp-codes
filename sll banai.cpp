#include<bits/stdc++.h>

using namespace std;



class Node
{
public:
    Node *next;
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
            tail = n;
        }
    }

    srch(int d)  // search by value
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

    del(int d) // deletes dth node
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

    // removes negative values and enters them into another sll
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
    void rev() //reverse full sll
    {
        Node* current = head;
        Node *prev = NULL, *nx = NULL;

        while (current != NULL)
        {
            nx = current->next;

            current->next = prev;

            prev = current;
            current = nx;
        }
        head = prev;
    }
    void rev(int a) // reverse first a nodes
    {

        int c=1;
        Node *temp;
        temp = head;
        Node *temp2;
        temp2 = head;
        while(c!=a)
        {
            c++;
            temp = temp->next;
        }


        Node* current = head;
        Node *prev = temp, *nx = NULL;
        c =1;
        while (c != a)
        {
            nx = current->next;

            current->next = prev;

            prev = current;
            current = nx;
            c++;
        }
        head = prev;
    }

    void swa(int a,int b)   // swaps 2 nodes
    {
        int c=1;
        Node *temp;
        temp = head;
        Node *temp2;
        temp2 = head;
        while(c!=a)
        {
            c++;
            temp = temp->next;
        }
        c=1;
        while(c!=b)
        {
            c++;
            temp2 = temp2->next;
        }
        swap(temp->data,temp2->data);


    }

    void sums(int s)  // sum search
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

            while(temp2!=NULL)
            {
                x=temp->data + temp2->data ;
                if(x == s)
                    cout<<"("<<temp->data<<","<<temp2->data<<")\n";
//                    cout<<x<<"\n";
//                    printf("(%d,%d)\n",,temp2->data);

                temp2 = temp2->next;
            }
            temp = temp->next;

        }
    }
    void Remove() // torta
    {
        Node *temp=head, *temp1;


        if(head==NULL)
        {
            cout << "this list is empty. there are no elements to remove\n" << endl;
        }

        else if(temp->next==NULL)
        {
            delete(temp);
            tail=NULL;
            head=NULL;
        }
        else
        {
            while(temp->next!=NULL)
            {

                temp1=temp;
                temp=temp->next;
            }
            delete(temp);
            temp1->next=NULL;
            tail=temp1;
        }

    }


    void rd() //removes duplicates
    {
        Node *temp,*temp2;
        temp = head;
        int c=1;
        while(temp!=NULL)
        {
            temp2=temp->next;

            int k=c+1;
            while(temp2!=NULL)
            {
                if(temp->data == temp2->data)
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
    int x = 1;
    sll->add(x++);
    sll->add(x++);
    sll->add(x++);
    sll->add(x++);
    sll->add(x);
    sll->add(x++);
    sll->add(x++);
    sll->add(x++);
    sll->add(x++);
    sll->print();

    sll->rd();

    sll->print();
    sll->rev(4);
    sll->print();

}
