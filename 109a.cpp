#include <iostream>
using namespace std;
int main()
{	
	int n;
	cin >> n;
	if (n < 14 && n % 4 && n != 11 && n != 7)
		cout << -1 << endl;
	else {
		while (n % 7) {cout << 4; n -= 4;}
		while (n) {cout << 7; n -= 7;}
	}
}

