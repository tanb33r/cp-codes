#include<bits/stdc++.h>
using namespace std;
int heap[100],n;

void heapbuild() {
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>heap[i];
}

void reheapup(int p) {
    if(p>0) {
        int parent = (p-1)/2;
        if(heap[p]>heap[parent])  {
            swap(heap[p],heap[parent]);
        }
        reheapup(parent);
    }
}

void maxheap(int arr[], int p, int lindex) {
    int larg = p;
    int lc= 2*p+1;
    int rc= 2*p+2;
    if(lc<lindex && arr[lc]> arr[larg])
        larg=lc;
    if(rc<n && arr[rc]>arr[larg])
        larg=rc;
    if(larg != p) {
        swap(arr[p],arr[larg]);
        maxheap(arr,larg,lindex);
    }
}

void convertMaxHeap(int arr[], int n) {
    for (int i = (n-2)/2; i >= 0; --i)
        maxheap(arr, i, n);
}
void minheap(int arr[], int p, int lindex) {
    int small = p;
    int lc= 2*p+1;
    int rc= 2*p+2;
    if(lc<lindex && arr[lc] < arr[small])
        small=lc;
    if(rc<n && arr[rc]<arr[small])
        small=rc;
    if(small != p) {
        swap(arr[p],arr[small]);
        minheap(arr,small,lindex);
    }
}
void convertMinHeap(int arr[],int n) {
    for (int i = (n-2)/2; i >= 0; --i)
        minheap(arr,i,n);
}
void display() {
    cout<<"Heap is:"<<endl;
    for(int i=0; i<n; i++)
        cout<<heap[i]<<" ";
    cout<<"\n";
}

void menu() {
    cout<<"----------------"<<endl;
    cout<<"(1) Build a new Heap "<<endl;
    cout<<"(2) Convert to Max Heap "<<endl;
    cout<<"(3) Convert to Min Heap "<<endl;
    cout<<"(4) Display heap"<<endl;
    cout<<"(5) Exit "<<endl;
    cout<<"----------------"<<endl;
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
            convertMaxHeap(heap,n);
            break;
        case 3:
            convertMinHeap(heap,n);
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Thank You" << endl;
            exit(0);
        }

    }
}
