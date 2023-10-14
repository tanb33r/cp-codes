/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int heap[7],n;

void reheapup(int p) {
    if(p>0) {
        int parent = (p-1)/2;
        if(heap[p]>heap[parent]) { //heap[p]<heap[parent]
            swap(heap[p],heap[parent]);
        }
        reheapup(parent);
    }
}
void heapbuild() {
    n=7;
    for(int i=0; i<n; i++) {
        cin>>heap[i];
        reheapup(i);
    }
}

void reheapdown(int p, int lindex) {
    int lc= 2*p+1;
    int rc= 2*p+2;
    int c;
    if(lc<lindex || rc<lindex ) {
        if(heap[p]<heap[lc]  || heap[p]<heap[rc] ) {
            if(heap[lc]>heap[rc])
                c = lc;
            else
                c= rc;
            swap(heap[p],heap[c])
            reheapdown(c,lindex);
        }
    }
}
void deleteheap() {
    heap[0]= heap[n-1];
    n--;
    reheapdown(0,n);
}
void display() {
    cout<<"Heap is:\n";
    for(int i=0; i<n; i++) {
        cout<<heap[i]<<endl;
    }
}
int main() {
    heapbuild();
    display();
    deleteheap();
    display();
    //cout<<"Hello World";

    return 0;
}
