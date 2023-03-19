#include<bits/stdc++.h>
#include"Node.h"
using namespace std;


void menu(){
    cout << "------------------" << endl;
    cout << "Binary Search Tree" << endl;
    cout << "------------------" << endl;
    cout << " (1) Insert ... (2) PreOrder ... (3) InOrder ... (4) PostOrder "<< endl;
    cout << " (5) Search ... (6) Find Maximum ... (7) Find Minimum ... (8)Delete Element "<<endl;
    cout << " (9) Height " <<endl;

    cout << "(11) exit ..." << endl;
    cout << "------------------" << endl;
}
int main()
{
    int choice;
    int key;
    BST *b = new BST ();
    while(true){
        menu();
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice){
        case 1:
            cout << "Enter key: ";
            cin >> key;
            b->root=b->insert(b->root,key);
            break;

        case 2:
            b->preOrder(b->root);
            break;

        case 3:
            b->inOrder(b->root);
            break;

        case 4:
            b->postOrder(b->root);
            break;

        case 5:
            int s;
            cout<<"Enter the searching Number"<<endl;
            cin>>s;
            if(b->Search(b->root,s))
               cout<<"YES";
            else
                cout<<"NO";

        break;

        case 6:
            cout<<"Maximum Value of the Tree: "<<b->max(b->root)<<endl;
            break;

        case 7:
            cout<<"Minimum Value of the Tree: "<<b->min(b->root)<<endl;
            break;
        case 8:
            int k;
            cout<<"Enter the Number You want to delete from the tree"<<endl;
            cin>>k;
            b->Delete(b->root,k);
            break;
        case 9:
            cout<<"Height of the tree: "<<b->Height(b->root)<<endl;
            break;
        case 11:
            cout << "thank you!" << endl;
            exit(0);
        }
    }
    return 0;
}
