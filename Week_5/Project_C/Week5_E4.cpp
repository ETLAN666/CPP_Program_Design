#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int* p;
	p = (int*)malloc(5 * sizeof(int));
	
	for (int i = 0; i < 5; i++)
		cin >> p[i];
	for (int i = 4; i >=0; i--)
		printf("%4d", p[i]);
	free(p);
}
