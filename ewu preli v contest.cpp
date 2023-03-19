#include<bits/stdc++.h>
using namespace std;

vector<int>v,v2;
int decToBinary(int n)
{
    int i = 0;
    while (n > 0)
    {
        v.push_back(n%2);
        //binaryNum[i] = n % 2;
        n /= 2;
        i++;
    }
    reverse(v.begin(),v.end());
    return i;
    /*    for (int j = i - 1; j >= 0; j--)
            cout << binaryNum[j];*/
}
int main()
{
    //int total=seive();
    int x[] = {1,2,2,3,2,4,2,4,3,4,2,0,2,4,4,5,2,6,2,6};
    int n,i,t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        int a= decToBinary(l);

        v2 = v;
        v.clear();
        int b= decToBinary(r);

        for(i=0; i<v2.size(); i++)
            cout<<"l "<<v2[i]<<endl;
        v.clear();
        i=0;
        j=0;
        while(v[i]!=0)
            i++;
        while(v2[j]!=0)
            j++;
        i++,j++;
        if()


        v2.clear();

    }

}






