#include<bits/stdc++.h>
#include "munem.h"
using namespace std;

typedef struct BST {
    int data;
    struct BST *left;
    struct BST *right;

} node;

node *create();
void insert_node(node *root, node *tmp);
node *search_node(node *root, int x);
node *find_min(node *root);
node *find_max(node *root);
node *delete_node(node *root, int x);
void preOrder(node* root);
void inOrder(node* root);
void postOrder(node* root);

int main() {
    char ch;
    node *root = NULL, *tmp;

    do {

        tmp = create();
        if(root == NULL)
            root = tmp;
        else
            insert_node(root, tmp);
        printf("Do you want to enter more(y/n)? - ");
        getchar();
        scanf("%c",&ch);
        if(!(ch=='y'||ch=='Y'||ch=='n'||ch=='N')) {
            printf("Invalid Option\n");
            printf("Continue: (y/n)");
            scanf("%c",&ch);
        }
    } while(ch == 'y' || ch == 'Y');

    printf("inOrder Traversal: ");
    //preOrder(root);
    inOrder(root);
    printf("\n");

    printf("preOrder Traversal: ");
    preOrder(root);
    printf("\n");

    printf("postOrder Traversal: ");
    postOrder(root);
    printf("\n");

    node *maxValue = find_max(root);
    printf("The max value: %d\n",maxValue->data);

    node *minValue = find_min(root);
    printf("The min value: %d\n",minValue->data);

    printf("Enter the value that you want to search: ");
    int x;
    scanf("%d",&x);
    node *searchValue = search_node(root,x);
    if(searchValue!= NULL)
        printf("%d is Found.\n",searchValue->data);


    printf("Enter the value that you want to delete: ");
    int y;
    scanf("%d",&y);
    delete_node(root,y);

    printf("inOrder Traversal: ");
    inOrder(root);
    printf("\n");

    return 0;
}


