
#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

template<typename T>
T Max(T array[], int n)
{
	int i;
	T temp;
	temp = array[0];
	for (i = 1; i < n; i++)
	{
		if (array[i] > temp)
			temp = array[i];
	}
	return temp;
}


int main()
{
	int aa[5] = { 1,2,3,4,5 };
	printf("Max int = %d\n", Max(aa, 5));
	double bb[5] = { 1.1,2.0,3.0,4.0,5.5 };
	printf("Max double = %lf\n", Max(bb, 5));
	return 0;

}

