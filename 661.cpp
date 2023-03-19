#include <bits/stdc++.h>
using namespace std;

int main()
{

   std::ios::sync_with_stdio(0);
//    cin.tie(NULL);
    int x,m,n,c,t=0,a;

//    while (scanf("%d %d %d", &n, &m, &c), n)
//    {

    while(cin>>n>>m>>c)
    {
        if(m==n && n == c && c==0)
            return 0;

        int x[21];
        int a,sum=0,maxi=0,i;
        bool b[21],blow=0;

        memset(b,false,sizeof(b));

        for ( i = 0 ; i< n ; i++)
            cin>>x[i];

        for (int i=0;i<m;i++)
          {
            cin>>a;
            a--;
            b[a]=!b[a];

            if(b[a])
                sum+=x[a];
            else
                sum-=x[a];

//           cout<<"   hhhhhh "<<h<<endl;
//            if(maxi>c)
//                blow =1;

            maxi=max(maxi,sum);
        }

        cout<<"Sequence "<<++t<<"\n";

        if(maxi>c)
            cout<<"Fuse was blown.\n\n";
        else
            cout<<"Fuse was not blown.\n"<<"Maximal power consumption was "<<maxi<<" amperes.\n\n";

//        cout<<h<<"   "<<maxi<<"   ";
    }
}
