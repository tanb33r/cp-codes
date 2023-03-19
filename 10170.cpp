#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long s,d;
    while(cin>>s>>d)
    {
        long long s2=s;
        long long s3=s;
        long long int c=0;
        while(s<d)
        {
            s+=++s3;
            c++;
        }
        cout<<s2+c<<endl;
    }
}
//1 3 6
//3 7 12 18
//
//3 4 5
