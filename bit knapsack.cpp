
bool bad(vector<int> v)
{
	int s=0;
	for (int i:v)
	s+=i;
	if (s%2)
	return 0;
	bitset<200005> b;
	b[0]=1;
	for (int i:v)
	b|=(b<<i); // 5 valuer coin
	return b[s/2];
}
// b bitset represents all the possible sum from the array
