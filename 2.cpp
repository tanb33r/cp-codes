#include<bits/stdc++.h>
using namespace std;
int heap[100],n;

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
    for (int i = n-1; i >= 0; --i)
        minheap(arr,i,n);
}

int main() {
    int choice;
    int key;
    int t;
    int arr[100];
    int total;
    cin>>total;
    n = total;


    for(int i=0; i<total; i++)
        cin>>heap[i];
    convertMinHeap(heap,total);


    int i = 0,sum = 0;
    while(i<total and sum+heap[i] < total) {
        sum+=heap[i++];

    }
    cout<<sum<<endl;

}
