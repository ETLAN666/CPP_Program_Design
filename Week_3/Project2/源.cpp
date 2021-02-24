#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int i, T;
	long long int j, n, F, Out;
	cin>>T;
	for (i = 0; i < T; i++)
	{
		cin>>n;
		j = (n * (n + 1) / 2) % (7 + 1000000000);
		F = j * j;
		Out = F % (7 + 1000000000);
		printf("%lld\n", Out);
	}
	return 0;
}