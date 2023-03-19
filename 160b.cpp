#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)

using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;

    sort(s.begin(),s.begin()+n);
    sort(s.begin()+n,s.end());
    int a=0,b=0;
    if(s[0]>s[n])
        a=1;

//    cout<<s;
    if(a)
        f(i,n)
    {
        if(s[i]<=s[i+n])
            b=1;
    }
    else
        f(i,n)
        if(s[i]>=s[i+n])
            b=1;
    if(b)
        cout<<"NO";
    else
        cout<<"YES";
}


/*



3
654321

*/
