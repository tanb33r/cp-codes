#include <iostream>
using namespace std;
int binarySearch(int arr[], int first, int last,int value) {

    first = last
    while(first<last) {
        int mid = (first+last)/2;
        if(arr[mid]==value)
            return mid;

        else if(arr[mid]>value)
            return binarySearch(arr, first, mid, value);

        else if(arr[mid]<value)
            return binarySearch(arr, mid+1, last, value);

    }
    return -1;
}


int main(void) {
    int arr[] = { 2, 3, 4, 10, 40, 50, 55, 60, 60,80,100 };

    int n = sizeof(arr) / sizeof(arr[0]);
    int x =40;
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}

