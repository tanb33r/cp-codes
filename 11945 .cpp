#include <bits/stdc++.h>
#include <string.h>
#include <iostream>
using namespace std;
long  double n[50001];
int main()
{
    vector<char> v;
    double m,p,sum;
    long long int sum2,temp;
    int i=0,c=0,x,t,d;
    cin>>t;

    while(t-c++)
    {
        sum=0;
        x=12;
        while(x--)
        {
            cin>>m;
            m*=100;
            sum+=m;
        }
        sum/=12;

        p=fmod(sum,100.0);
        p=round(p);
        sum/=100;
        cout<<c<<" $";
        temp=sum;
        while(temp)
        {
            int l=temp%10;
            char ll=l+'0';
        //    cout<<sum<<" "<<l<<"  "<<ll<<endl;
            temp/=10;
            v.push_back(ll);
        }

 // cout<<temp<<endl;

        for(i=v.size()-3; i>0; i-=3)
            v.insert(v.end()-i,',');

        reverse(v.begin(),v.end());

        for(i=0; i<v.size(); i++)
            cout<<v.at(i);

        if(p)
            cout<<"."<<p<<endl;
        else
            cout<<".00"<<endl;
    v.clear();
    }
}

