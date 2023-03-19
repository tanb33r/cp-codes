// Example program to demonstrate sprintf()
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char b[500]={'0'};
	int a = 1,c;

	int k=10;
	while(k--)
	sprintf(b, "%s %d", b, a++);

	// The string "sum of 10 and 20 is 30" is stored
	// into buffer instead of printing on stdout
	printf("%s", b);

	return 0;
}

