Node *leaf_count(Node *root) {
    int cnt=0;
    if(root == NULL)
        cnt++;
    else {
        cnt+= leaf_count(root->L);
        cnt+= leaf_count(root->R);
    }
    return cnt;
}


int main() {

    BST *b=new BST();
    cout<<"COUNT OF LEAF : "<<leaf_count(b)<<endl;
}
