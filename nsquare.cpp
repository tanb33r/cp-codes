#include <bits/stdc++.h>
using namespace std;
int main() {
    int X = 6;
//    scanf("%d",)
    int arr[15] = {2,1,47,4,8,36,4,0,11,4,74,83,6,4,0};
    int n = 15;

    for(int i = 0 ; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if(arr[i]+arr[j] == X) {
                printf("%d %d\n",arr[i],arr[j]);
                return 0;
            }
        }
    }

    cout<<"could not find such a, b\n";
    return 0;

}
