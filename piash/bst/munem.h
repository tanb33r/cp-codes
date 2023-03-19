#include<bits/stdc++.h>
node *create() {
    node *tmp;
    printf("Enter data: ");
    tmp = (node*)malloc(sizeof(node));
    scanf("%d",&tmp->data);
    tmp->left = tmp->right = NULL;
    return tmp;
}

void insert_node(node *root, node *tmp) {
    if(tmp->data < root->data) {

        if(root->left != NULL)
            insert_node(root->left, tmp);
        else
            root->left = tmp;
    }

    if(tmp->data > root->data) {

        if(root->right != NULL)
            insert_node(root->right, tmp);
        else
            root->right = tmp;
    }

}

node* search_node(node *root, int x) {

    if(root==NULL) {
        printf("Not Found!!\n");
        return NULL;
    }
    if(root->data==x)
        return root;
    else if(x>root->data)
        search_node(root->right, x);
    else
        search_node(root->left,x);

}

node* find_min(node *root) {
    if(root == NULL)
        return NULL;
    else if(root->left != NULL)
        return find_min(root->left);
    return root;
}

node* find_max(node *root) {
    if(root == NULL)
        return NULL;
    else if(root->right != NULL)
        return find_max(root->right);
    return root;
}

node *delete_node(node *root, int x) {

    int c =0;

    if(root==NULL)
        return NULL;
    if (x > root->data)
        root->right = delete_node(root->right, x);
    else if(x < root->data)
        root->left = delete_node(root->left, x);
    else {

        c++;
        //printf("x %d = %d\n",c,x);

        //No Children
        if(root->left==NULL && root->right==NULL) {
            free(root);
            return NULL;
        }

        //One Child
        else if(root->left==NULL || root->right==NULL) {
            node *tmp;
            if(root->left==NULL)
                tmp = root->right;
            else
                tmp = root->left;
            free(root);
            return tmp;
        }

        //Two Children
        else {
            node *tmp = find_min(root->right); //for finding Successor Node
            root->data = tmp->data;
            root->right = delete_node(root->right, tmp->data); //delete Successor Node
        }
    }
    // x is not in BST
    if(c == 0 && root->right == NULL && root->left == NULL) {
        printf("%d is not in this BST\n",x);
    }

    return root;
}


void preOrder(node* root) {

    if(root != NULL) {

        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }

}

void postOrder(node* root) {

    if(root != NULL) {

        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }

}

void inOrder(node* root) {

    if(root != NULL) {

        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }

}
