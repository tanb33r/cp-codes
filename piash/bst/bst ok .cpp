//check two bst contain same set of elements
#include<bits/stdc++.h>
using namespace std;


void magic(int x)
{
    if( (x%10)*(x/10) + (x%10)+(x/10)==x)
        cout<<x<<"\n";
}

class Node
{
public:
    int data;
    Node *L,*R;
    Node()
    {
        L=R= NULL;
    }
    Node(int key)
    {
        data = key;
        L=R= NULL;
    }

};

class BST
{
public:
    Node *root;
    BST()
    {
        root=NULL;
    }
    Node *insert(Node *root, int d)
    {
        if(root == NULL)
        {
            Node *new1=new Node(d);
            root=new1;
            root->L==NULL;
            root->R==NULL;
        }
        else if(d < root->data)
            root->L=insert(root->L,d);
        else
            root->R=insert(root->R,d);

        return root;
    }
    void inOrder(Node *r)
    {
        if(r!=NULL)
        {
            inOrder(r->L);
           magic(r->data);
            inOrder(r->R);
        }
    }

    /*
    void insertToHash(Node* root, unordered_set<int> &s)
    {
        if (!root)
            return;
        insertToHash(root->L, s);
        s.insert(root->data);
        insertToHash(root->R, s);
    }
    bool checkBSTs(Node *root1, Node *root2)
    {
        //Quadratic Equation
        //d=(b*b)-(4*a*c);
        //root1=(-b+sqrt(d))/(2*a);
        if (!root1 && !root2)
            return true;
        if ((root1 && !root2) || (!root1 && root2))
            return false;
        unordered_set<int> s1, s2;
        insertToHash(root1, s1);
        insertToHash(root2, s2);
        return (s1 == s2);
    }

    */
};


int main()
{
    BST *list1=new BST();
    BST *list2=new BST();
    int x,k;

    while(1)
    {
        cin>>x;
        if(x==0)
            break;
        list1->root=list1->insert(list1->root,x);
    }
    cout<<endl;

  /*  while(1)
    {
        cin>>k;
        if(k==0)
            break;
        list2->root=list2->insert(list2->root,k);
    }
    cout<<endl;*/

    cout<<"The List 1 inOrder"<<endl;
    list1->inOrder(list1->root);

    /*
    cout<<"The List 2 inOrder"<<endl;
    list2->inOrder(list2->root);
    */

    BST *b=new BST();
  /*  if(b->checkBSTs(list1->root,list2->root))
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;*/
}


