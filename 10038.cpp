#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    while(cin>>n) {
        long long a[3001],b[3001] = {0};

        for(int i=0; i<n; i++) {
            cin>>a[i];
        }
        for(int i=1; i<n; i++) {
            if(abs(a[i] - a[i-1]) < n)
                b[abs(a[i] - a[i-1])]++;
        }
        int count =0;
        for(int i=1; i<n; i++)
            if(b[i] == 0)
                count = 1;
        if(count)
            cout<<"Not jolly\n";
        else
            cout<<"Jolly\n";
    }
}
