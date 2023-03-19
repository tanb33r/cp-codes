#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t,w,a,t2=0,n,p,q,x,temp;
    cin>>t;
    while(t--)
    {
        w=a=0;
        cin>>n>>p>>q;
        temp = n;
        vector<int> anda;
        while(n--)
        {
            cin>>x;
            anda.push_back(x);
        }
        sort(anda.begin(),anda.end());


        while((a<=p && a<=temp) && w<=q)

            w+=anda[a++];

        anda.clear();
        cout<<"Case "<<++t2<<": "<<a-1<<endl;

    }
}
/*
5
3 5 55
1 1 1
*/
