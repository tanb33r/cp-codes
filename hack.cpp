#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define Mod 1000000007
#define MAXSIEVE 10000007
#define M_PI 3.14159265358979323846
using namespace std;


int main(){

    int v, s;
    cin >> v >> s;
    double r = s/(2*sin(M_PI/v));
    double a = M_PI*r*r;
    cout << setprecision(9) << a << endl;
    return 0;
}
