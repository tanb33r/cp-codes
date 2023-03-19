#include<bits/stdc++.h>
using namespace std;



class nodestack
{
public:
    string data;
    nodestack *next;
    nodestack()
    {
        next= NULL;
    }
    nodestack(string key)
    {
        data = key;
        next= NULL;
    }

};


class SLL
{
public:
    nodestack *head, *tail, *top=NULL;
public:
    SLL()
    {
        head= NULL;
        tail= NULL;
    }


    void Print()
    {
        nodestack* temp3;

        // check for stack underflow
        if (top==NULL)
        {
            cout<<"Stack is Empty"<<endl;
            //exit(1);
        }
        else
        {
            temp3 = top;
            while (temp3!= NULL)
            {

                // print node data
                cout<<temp3->data<<endl;

                // assign temp link to temp
                temp3 = temp3->next;
            }
        }
    }

    void Push(string  ele)
    {
        nodestack *temp1=new nodestack();
        temp1->data=ele;
        temp1->next=top;
        top=temp1;
    }

    void Pop()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            nodestack *temp2=top;
            top=top->next;
            temp2->next=NULL;
            delete(temp2);
        }
    }

    /*int top(){


    }*/

    void showTop()
    {
        if(top==NULL)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<"Element at top is:"<<top->data<<endl;
        }
    }

    bool isEmpty()
    {
        if(top==NULL)
        {
            return true;
        }
        else
        {
            false;
        }
    }
};


int main()
{
    SLL *list1 = new SLL();
    SLL *l2 = new SLL();
    /* while(1)
     {
         string x;
         cin>>x;
         if(x == "null")
             break;
         list1->Push(x);
     }
    */


    list1->Push("10");
    list1->Push("20");
    list1->Push("30");
    list1->Push("40");

    nodestack *temp = list1->top;

                        cout<<list1->top<<"headdd\n"<<endl;

    while(temp != NULL)
    {
        l2->Push(temp->data);
        temp = temp -> next;
    }

    nodestack *t=list1->top;
    int c=0;
    SLL *list2 = new SLL();
    list1->Print();

                    cout<<"asdadsadsdsaads\n"<<endl;

    l2->Print();

}

