#include<bits/stdc++.h>
using namespace std;


int main ()

{
    while(1)
    {
        int l;
        cin>>l;
        if(!l)
            break;



//            char c;
        string c;
        cin>>c;
        int mi=1900000;

        int index=1900000;

        char s = 'a';
        for(int i = 0 ; i < l ; i++)
        {



            if(c[i] == s)
                mi = min (i-index,mi);

            if(c[i] == 'R')
                index = i ,s = 'D';

            if(c[i] == 'Z')
                mi = 0;

            if(c[i] == 'D')
                index = i ,s = 'R';

        }
        cout<<mi<<"\n";



    }

}

