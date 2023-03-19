#include <iostream>
using namespace std;

int main(void) {
    int arr[] = { 2, 3, 4, 10, 40, 50 , 55 , 60, 60 ,80 ,100 };



    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                          : cout << "Element is present at index " << result;
    return 0;
}

