#include<bits/stdc++.h>
using namespace std;


class Node
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }
    Node(int key)
    {
        next = NULL;
        data = key;
    }
};

class SLL
{
public:
    Node *head, *tail;

    Sll()
    {


    head = tail = NULL;
    }
    void Add(int element)
    {
        Node *newn = new Node(element);
            if(head == NULL)
                head = tail = newn;
            else
                tail = tail->next = newn;
    }


    void Addany(int element, int position)
    {
        Node *temp, *temp1;
        temp = head;
        Node *newn = new Node(element);
        if(head == NULL)
        {
            head = newn;
            tail = newn;
        }


        else
        {
            for(int i=1;i<position;i++)
            {
                temp = temp1;
                temp1 = temp1->next;
            }
            temp->next = newn;
            newn->next = temp1;
        }

    }


};
