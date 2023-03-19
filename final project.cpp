#include <bits/stdc++.h>
using namespace std;
#define Elements 4

// class for each node
class UnrollNode {
  public:
    UnrollNode *next;
    int num_elements;

    int arr[Elements] = {0};
    // Constructor
    UnrollNode() {
        next = NULL;
        num_elements = 0;
    }
    UnrollNode(int n) {
        next = NULL;
        num_elements = 0;

    }
};

// Operation of Unrolled Function
class UnrollLinkList {
  public:
    UnrollNode *start_pos;
    UnrollNode *end_pos;

    // Parameterized Constructor
    UnrollLinkList() {
        start_pos = NULL;
        end_pos = NULL;


    }

    // Insertion operation
    void Delete(int noden, int index) {

        UnrollNode *start = start_pos;
        for(int i = 0 ; i<noden ; i++) {
            start = start->next;
        }
        for(int i = index - 1 ; i<Elements - 1 ; i++) {
            start->arr[i] = start->arr[i+1];
        }
        start->num_elements--;
    }

    void Insert(int num) {
//        nNode++;

        // Check if the list starts from NULL
        if (start_pos == NULL) {

            UnrollNode *temp = new UnrollNode();
            start_pos = temp;
            start_pos->arr[0] = num;
            start_pos->num_elements++;
            end_pos = start_pos;
            return;
        }

        // Attaching the elements into nodes
        if (end_pos->num_elements + 1 < Elements) {
            end_pos->arr[end_pos->num_elements] = num;
            end_pos->num_elements++;
        }

        // Creation of new Node
        else {
            UnrollNode *node_pointer = new UnrollNode();
            int j = 0;

            node_pointer->arr[0] = num;
            node_pointer->num_elements = 1;
            end_pos->next = node_pointer;
            end_pos = node_pointer;
        }
    }

    // Display the Unrolled Linked List
    void display() {
        puts("\nUnrolled Linked List = ");
        puts("");

        UnrollNode *pointer = start_pos;
        while (pointer != NULL) {
            for (int i = 0; i < pointer->num_elements; i++)
                printf("%d\t",pointer->arr[i]);
            puts("");
            pointer = pointer->next;
        }
        puts("");
    }
};

int main() {

    UnrollLinkList *ull = new UnrollLinkList();
    int n=10,k;
    puts("How many numbers?");
//    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
//        scanf("%d",&k);
//        ull->Insert(k);
        ull->Insert(i);
    }
    ull->display();
    ull->Delete(2,1);
    ull->display();
}







