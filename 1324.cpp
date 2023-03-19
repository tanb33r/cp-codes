#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    int n,flag = 0;
    cin >> n;
    int a[n];
    for(int i =0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        for(int j=i+2;j<n;j++)
            if(a[i]==a[j]){
                flag = 1;
                break;}
    if(flag)
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
    }
    return 0;
}

/*
5
4
1 2 3 1

*/
