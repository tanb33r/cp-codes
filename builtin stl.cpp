// C program to illustrate __builtin_clz(x)
#include <stdio.h>
int main()
{
	int n = 16;
	long long  x = 16;
//__builtin_popcount
	printf("Count of leading zeros before 1 in %d is %d\n",n, __builtin_clz(n));
	printf("Count of leading zeros before 1 in %d is %d\n",n, 63-__builtin_clzll(n));
	return 0;
}
