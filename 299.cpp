// program below illustrates the
// vector::insert() function

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v ;

    int t,t2,a;
    cin>>t;
    while(t--)
    {
        v.clear();
        cin>>t2;
        while(t2--)
        {
            cin>>a;
            v.push_back(a);
        }
        int sum = 0;
        for(int i = 0 ; i< v.size(); i++)
            if((i+1)!=v[i])
            {
                   int x = v[i];
                sum+=abs(x-(i+1));
                v.erase(v.begin()+i);
                v.insert(v.begin()+x-1,x);

                /*
                               vector<int>::iterator it;

                      for ( it = v.begin(); it != v.end(); ++it)
                           cout << *it << " ";
                      */
                i--;
            }

        cout <<"Optimal train swapping takes "<<sum<<" swaps."<<endl;
    }
    /*

    4
    4
    1 3 4 2
    */


    return 0;
}


