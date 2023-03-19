#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,k,c=0;
    string a,b,s;
    cin>>t;
    while(t--)
    {
        c++;
        getline(cin>>ws,a);
        cin>>b;

        if(a==b)
            cout<<"Case "<<c<<": Yes"<<endl;

        else
        {
            s="";
            for(i = 0; i<a.size(); i++)
                if(a[i]!=' ')
                    s+=a[i];

            if(s==b)
                cout<<"Case "<<c<<": Output Format Error"<<endl;
            else
                cout<<"Case "<<c<<": Wrong Answer"<<endl;
            a.clear();
            b.clear();
            s.clear();
        }
    }
}

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[40], b[40], c[40];
    int caseno=0, t, len, i, j;
    while(scanf("%d\n", &t)==1){
                while(t--){
        gets(a);
        gets(b);
        if(strcmp(a, b)==0){
            printf("Case %d: Yes\n", ++caseno);
        }
        else
        {
                len=strlen(a);
                j=0;
            for(i=0; i<len; i++){
                if(a[i]!=' '){
                    c[j]=a[i];
                    j++;
                }
            }
            c[j]='\0';
            if(strcmp(b, c)==0){

                printf("Case %d: Output Format Error\n", ++caseno);
            }
            else
                printf("Case %d: Wrong Answer\n", ++caseno);
        }
    }
    }
    return 0;
}
*/


