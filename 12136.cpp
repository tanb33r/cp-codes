
#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,a,x,t,t2=0,sum,j,k;
    cin>>t;
    while(t--)
    {
        char x,s[12],s2[12];
        // getline(cin,s);
        getchar();

        gets(s);
        //   getchar();
        gets(s2);
        //getline(cin,s2);
        cout<<s<<" ss "<<s2<<endl;
        int m,m2,w,w2;

        m =  ((s[0]-'0')*10+(s[1]-'0'))*60  +  ((s[3]-'0')*10+(s[4]-'0'));
        m2 = ((s[6]-'0')*10+(s[7]-'0'))*60  +  ((s[9]-'0')*10+(s[10]-'0'));
        w =  ((s2[0]-'0')*10+(s2[1]-'0'))*60 + ((s2[3]-'0')*10+(s2[4]-'0'));
        w2 = ((s2[6]-'0')*10+(s2[7]-'0'))*60 + ((s2[9]-'0')*10+(s2[10]-'0'));
        cout<<m<<" "<<m2<<" "<<w<<" "<<w2<<endl;

        cout<<"Case "<<++t2<<": ";
        if(w>m2 || m>w2)
            cout<<"Hits Meeting"<<endl;
        else cout<<"Mrs Meeting"<<endl;
    }
}
