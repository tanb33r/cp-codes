#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;
    char a[11] {0};
    int Count[200] {0};
    // a    a    a a a a a a a a
    for(int i = 0 ; i<n ; i++) {
        cin>>a[i];
        Count[a[i]]++;
    }
//// 0 2 3 2 0 0 0 0 0 0 0 0
    for(int i = 97 ; i<200 ; i++) {
        char c = 'a'+i;
        cout<<c<<" "<<Count[i]<<endl;
    }


}
