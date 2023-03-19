//2018-3-60-123
#include <iostream>

using namespace std;
int heap[100],n;


void heapbuild() {
    cout<<"Enter n:\n";
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>heap[i];
}

void reheapup(int p) {
    if(p>0) {
        int parent = (p-1)/2;
        if(heap[p]>heap[parent])
            swap(heap[p],heap[parent]);
        reheapup(parent);
    }
}

void reheapdown(int p, int i) {
    int lc= 2*p+1;
    int rc = lc+1;
    int c;
    if(lc<i || rc<i ) {
        if(heap[p]<heap[lc]  || heap[p]<heap[rc] ) {
            c =(heap[lc]>heap[rc])?lc:rc;
            swap(heap[p],heap[c]);
            reheapdown(c,i);
        }
    }
}

void maxheap(int heap[], int p, int i) {
    int larg = p;
    int lc= 2*p+1;
    int rc= 2*p+2;
    if(lc<i && heap[lc]> heap[larg])
        larg=lc;
    if(rc<n && heap[rc]>heap[larg])
        larg=rc;
    if(larg != p) {
        swap(heap[p],heap[larg]);
        maxheap(heap,larg,i);
    }
}

void convertmaxheap(int heap[], int n) {
    for (int i = (n-2)/2; i >= 0; --i)
        maxheap(heap, i, n);
}

void minheap(int heap[], int p, int i) {
    int small = p;
    int lc= 2*p+1;
    int rc= 2*p+2;
    if(lc<i && heap[lc] < heap[small])
        small=lc;
    if(rc<n && heap[rc]<heap[small])
        small=rc;
    if(small != p) {
        swap(heap[p],heap[small]);
        minheap(heap,small,i);
    }
}

void deleteheap() {
    heap[0]= heap[n-1];
    n--;
    reheapdown(0,n);
}

void convertminheap(int heap[],int n) {
    for (int i = (n-2)/2; i >= 0; --i)
        minheap(heap,i,n);
}
void display() {
    cout<<"Heap is:\n";
    for(int i=0; i<n; i++)
        cout<<heap[i]<<" ";
    cout<<" ";
}

void menu() {
    cout<<"----------------\n";
    cout<<"(1) Build a new Heap \n";
    cout<<"(2) Convert to Max Heap \n";
    cout<<"(3) Convert to Min Heap \n";
    cout<<"(4) Display heap\n";
    cout<<"(5) Exit \n";
    cout<<"----------------\n";
}

int main() {
    int choice;
    int key;
    while(true) {
        menu();
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
        case 1:
            heapbuild();
            break;
        case 2:
            convertmaxheap(heap,n);
            break;
        case 3:
            convertminheap(heap,n);
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Thank You\n";
            return 0;
        }
    }
}
