#include<bits/stdc++.h>
using namespace std;
int main()
{

    double credits_completed=48,cg1=3.19,cg2;
    double ttotal_credit;

    int koto,i=1;
//    cout<<140-48
    while(cin>>koto)
    {
        if(!koto) break;
        cg2 =  cg1 * credits_completed + koto*4;
        credits_completed+=koto;

        cg2/=credits_completed;
        cg1=cg2;



        cout<<i++<<"\n";
        cout<<cg2<<"\n";
    }




}
