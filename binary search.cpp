#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {


    if (l <= r) {
        int m = (l + r)/ 2;
        if (arr[m] == x)
            return m;

        if (arr[m] > x)
            return binarySearch(arr,l, m-1, x );
        else
            return  binarySearch(arr,m+1, r, x );
    }
    return -1;
}
int main(void) {
    int arr[] = {1,2,3,5,7,8,9,10,13,14,16,18,20,22};
    int x = 18;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<"\n";
    int result = binarySearch(arr, 0, n - 1, x);
    cout<<result<<"\n";
    (result == -1) ? cout << "Element is not present in array"
                          : cout << "Element is present at index " << result;
    return 0;
}

