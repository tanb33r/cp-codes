#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
using namespace std;


int main() {
	char word[1000];
	int n;

	cin >> n;
	while(n--){
		cin.ignore();
		cin >> word;

		sort(word,word+strlen(word));
		cout << word << endl;
		while(next_permutation(word,word+strlen(word))){
			cout << word << endl;
		}
	}

	return 0;
}
