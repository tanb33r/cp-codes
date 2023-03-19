
#include<bits/stdc++.h>

using namespace std;



int main()
{

    int tc=10, t = 1;
        vector <int> vc;
        for(int i = 0; i < tc; i++)
            vc.push_back(i);


        cout << "Case " << t++ << ": ";
        int ans = 0;
        for(int i = 0; i < tc; i++)
        {
            for(int j = i+1; j < tc-1; j++)
            {
                int ues = vc[i] + vc[j] - 1;
                int inde = upper_bound(vc.begin(), vc.end(), ues) - vc.begin() - 1;
                cout<<" \n"<<inde<<"   "<<ues<<"   inde";
                ans += inde - j;
            }
        }
        cout << ans << endl;


    return 0;
}
