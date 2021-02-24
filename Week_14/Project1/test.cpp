#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstdlib>
#include <algorithm>
#include<cstring>

using namespace std;

bool cmp(int x, int y)
{
	return x < y;
}



int main()
{

	int a[] = { 3,1,7,9,6,4,5,2,8 };
	for (int i = 0; i < 9; i++)
		cout << a[i] << " ";
	putchar('\n');
	sort(a, a + 9,cmp);
	for (int i = 0; i < 9; i++)
		cout << a[i] << " ";
	putchar('\n');
	return 0;
}