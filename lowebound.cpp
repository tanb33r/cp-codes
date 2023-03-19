// CPP program to illustrate
// std :: lower_bound
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
    vector<int> v ;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // Print vector
    cout << "Vector contains :";
    for (unsigned int i = 0; i < v.size(); i++)
        cout << " " << v[i];
    cout << "\n";

    vector<int>::iterator low1, low2;

    // std :: lower_bound
    low1 = upper_bound(v.begin(), v.end(), 19);
    low2 = lower_bound(v.begin(), v.end(), 55);

    cout << "\n1: " << *low1;
    cout << "\n2: " << (*low2);
    cout << "\nlower_bound for element 20 at position : " << (low1 - v.begin());
    cout << "\nlower_bound for element 55 at position : " << (low2 - v.begin());

    return 0;
}

